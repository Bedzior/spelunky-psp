project(Input)

add_library(Input STATIC
        src/Input.cpp
        interface/Input.hpp
        interface/InputEvent.hpp
        interface/Toggle.hpp
        $<IF:$<BOOL:${SPELUNKY_PSP_PLATFORM_PSP}>,src/Input_PSP.cpp,>
        $<IF:$<BOOL:${SPELUNKY_PSP_PLATFORM_DESKTOP}>,src/Input_Desktop.cpp,>
        $<IF:$<BOOL:${SPELUNKY_PSP_PLATFORM_ANDROID}>,src/Input_Android.cpp,>
)

target_include_directories(Input
        PRIVATE include interface
        INTERFACE interface
)

set_target_properties(Input PROPERTIES
        CXX_STANDARD
        17
)

target_link_libraries(Input
    PUBLIC
        Patterns
    PRIVATE
        $<$<BOOL:${SPELUNKY_PSP_PLATFORM_ANDROID}>:SDL_2_XX>
        $<$<BOOL:${SPELUNKY_PSP_PLATFORM_DESKTOP}>:SDL_1_XX>
)
