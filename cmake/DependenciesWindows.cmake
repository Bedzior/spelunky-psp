macro(add_windows_dependencies)
    add_library(Dependencies INTERFACE)
    find_package(SDL REQUIRED)
    set(SDL_INCLUDE_DIR "${SDL_INCLUDE_DIR}/../")
    target_link_libraries(Dependencies INTERFACE
            ${SDL_LIBRARY}
            )

    target_compile_definitions(Dependencies INTERFACE
            SPELUNKY_PSP_PLATFORM_WINDOWS
            SPELUNKY_PSP_PLATFORM_DESKTOP
            )
endmacro()

macro(spelunky_psp_post_build_windows)
endmacro()
