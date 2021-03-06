cmake_minimum_required(VERSION 3.1)
project(atlasc)

option(STATIC_LIB "Build atlasc as static-library instead of command-line tool" OFF)

function(remove_compile_options DEST_VAR COMPILER_FLAGS FLAGS)
        separate_arguments(FLAGS)
        foreach(FLAG ${FLAGS})
            string(REPLACE "${FLAG}" "" COMPILER_FLAGS "${COMPILER_FLAGS}")
        endforeach()
        set(${DEST_VAR} ${COMPILER_FLAGS} PARENT_SCOPE)
endfunction()

add_definitions(-D__STDC_LIMIT_MACROS)
add_definitions(-D__STDC_FORMAT_MACROS)
add_definitions(-D__STDC_CONSTANT_MACROS)
if(MSVC)
    add_definitions(-D_ITERATOR_DEBUG_LEVEL=0)
    add_definitions(-D_HAS_EXCEPTIONS=0)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS=0)
	
    remove_compile_options(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}" "/MD")
    remove_compile_options(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}" "/MD")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
    set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} /MT")
else()
    add_compile_options(-std=gnu11)
endif()
if (RPI)
    add_definitions(-D__RPI__)
endif()

add_subdirectory(3rdparty/sx)
add_subdirectory(3rdparty/delaunay)

if (NOT STATIC_LIB)
    add_executable(atlasc src/atlasc.c)
else()
    add_library(atlasc STATIC src/atlasc)
    target_compile_definitions(atlasc PRIVATE -DATLASC_STATIC_LIB)
endif()

target_link_libraries(atlasc PRIVATE sx delaunay)
target_include_directories(atlasc PRIVATE 3rdparty)

