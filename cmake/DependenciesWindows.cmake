macro(add_windows_dependencies)
    add_library(Dependencies INTERFACE)
    list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/deps/SDL")
    find_package(SDL REQUIRED)
    target_link_libraries(Dependencies INTERFACE
            ${SDL_LIBRARY}
            )

    target_compile_definitions(Dependencies INTERFACE
            SPELUNKY_PSP_PLATFORM_WINDOWS
            )
endmacro()

macro(spelunky_psp_post_build_windows)
endmacro()
