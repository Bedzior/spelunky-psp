project(resource-compiler)

    add_executable(resource-compiler src/Main.cpp)
    set_target_properties(resource-compiler PROPERTIES
        CXX_STANDARD 14
        CXX_EXTENSIONS OFF
    )

    function(spelunky_psp_compile_resources)
        set(options DEFERRED)
        set(oneValueArgs TARGET DESTINATION RESOURCE)
        set(multiValueArgs)
        cmake_parse_arguments(COMPILER "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

        if(NOT EXISTS ${COMPILER_RESOURCE} AND NOT ${COMPILER_DEFERRED})
            message(FATAL_ERROR "Missing resource file for target resource compilation: ${COMPILER_RESOURCE}")
        elseif(EXISTS ${COMPILER_RESOURCE})
            message(STATUS "Using ${COMPILER_RESOURCE} for resource compilation")
            message(STATUS "Resource compilation output: ${COMPILER_DESTINATION}/${COMPILER_TARGET}.h")
        endif()

        add_custom_target(${COMPILER_TARGET}
            COMMENT "Compiling header files for ${COMPILER_TARGET}"
            OUTPUT ${COMPILER_DESTINATION}/${COMPILER_TARGET}.h
            DEPENDS ${COMPILER_RESOURCE}
            COMMAND ${CMAKE_COMMAND} -E make_directory ${COMPILER_DESTINATION}
                PRE_BUILD
            COMMAND $<TARGET_FILE:resource-compiler> '${COMPILER_RESOURCE}' '${COMPILER_DESTINATION}/${COMPILER_TARGET}.h'
        )

        add_dependencies(${COMPILER_TARGET} resource-compiler)

    endfunction()
