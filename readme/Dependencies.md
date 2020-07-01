# Dependencies

### Bundled

For convenience majority of dependencies are bundled inside the repository and there is no need to download and build
them separately. All of them are placed under `/vendor` directory, not including [atlasc](https://github.com/septag/atlasc),
which is placed under `/tools/atlasc`, and is a development tool - a texture packer.

| Name                                         | Version                    | License           |
|----------------------------------------------|----------------------------|-------------------|
| [glad](https://github.com/Dav1dde/glad)      | OpenGL 1.3 / OpenGL ES 1.0 | MIT               |
| [glm](https://github.com/g-truc/glm)         | 0.9.9                      | Happy Bunny / MIT |
| [log.c](https://github.com/rxi/log.c)        | Unversioned                | MIT               |
| [stbimage](https://github.com/nothings/stb)  | 2.19                       | MIT               |
| [atlasc](https://github.com/septag/atlasc)   | 3.1                        | BSD 2-Clause      |
| [cjson](https://github.com/DaveGamble/cJSON) | 1.7.12                     | MIT               |

In some cases, custom changes were applied to either CMake files or other sources to make them compile and link under
PSP's standard C library which utilizes newlib as a libc implementation. In consequence of using non-GNU libc, 
PSP's C++ standard library is stripped of some symbols, i.e `std::to_string`.

For this compatibility reason, I could not use most of C++ 14 libraries and fell back to using plain C libs, i.e
using cjson instead of [nlohmann/json](https://github.com/nlohmann/json).

### Platform-specific

The only external dependency so far is SDL 1.2.15, and it is common on every supported platform (PSP/Linux/Windows).
Why SDL 1.2.15 instead of SDL2.x.x? At the time I started working on the Spelunky PSP, 
the [PSP toolchain](https://github.com/pspdev/psptoolchain) shipped only this version, and I was happy to use it as
it is still better than to directly access platform-specific libraries. 

As using legacy SDL set a precedent, I decided to utilize it on every other platform, yet this is not obligatory and I am
planning to move on to SDL2 at least on generic Linux/Windows platforms. 