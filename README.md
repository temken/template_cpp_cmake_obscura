[![Build Status](https://github.com/temken/template_cpp_cmake_obscura/workflows/Build%20Status/badge.svg)](https://github.com/temken/template_cpp_cmake_obscura/actions)
[![codecov](https://codecov.io/gh/temken/template_cpp_cmake_obscura/branch/main/graph/badge.svg)](https://codecov.io/gh/temken/template_cpp_cmake_obscura)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

# SOFTWARETITLE

<!-- <a href="https://ascl.net/xxxx.xxx"><img src="https://img.shields.io/badge/ascl-xxxx.xxx-blue.svg?colorB=262255" alt="ascl:xxxx.xxx" /></a> -->
<!-- [![DOI](https://zenodo.org/badge/xxx.svg)](https://zenodo.org/badge/latestdoi/xxx) -->
<!-- [![arXiv](https://img.shields.io/badge/arXiv-xxxx.xxxxx-B31B1B.svg)](https://arxiv.org/abs/xxxx.xxxxx) -->


<!-- Image:
<img width="350" src="url"> -->

A template for C++ projects using [obscura](https://github.com/temken/obscura).

## General notes

- build with [CMake](https://cmake.org/)
- continuous integration with [Github Actions](https://github.com/actions)
- unit testing with [googletest](https://github.com/google/googletest)
- code coverage with [codecov](https://codecov.io/).
- imports the static library [obscura](https://github.com/temken/obscura) and thereby also [libphysica](https://github.com/temken/libphysica)

<details><summary>Repository content</summary>
<p>

The included folders are:

- *bin/*: This folder contains the executable after successful installation together with the configuration files.
- *data/*: Contains additional data necessary for the simulations, e.g. the solar model tables.
- *external/*: This folder will only be created and filled during the build with CMake and will contain the [obscura](https://github.com/temken/obscura) library necessary for all direct detection computations.
- *include/*: All header files of SOFTWARETITLE can be found here.
- *results/*: Each run of SOFTWARETITLE generates result files in a dedicated sub-folder named after the run's simulation ID string, which is specified in the configuration file.
- *src/*: Here you find the source code of SOFTWARETITLE.
- *tests/*: All code and executable files of the unit tests are stored here.

</p>
</details>


## Getting started

<details><summary>1. Dependencies</summary>
<p>

Before we can install SOFTWARENAME, we need to make sure that a few dependencies are taken care of.

- [CMake](https://cmake.org/): SOFTWARENAME as well as the libraries libphysica and obscura are built with CMake.
- [boost](https://www.boost.org/): For numerical integration (used by libphysica).
- [libconfig](https://github.com/hyperrealm/libconfig): For the configuration files, SOFTWARENAME uses the libconfig library (required version at least 1.6). This will be installed by libphysica, if it is not already installed.
- [libphysica](https://github.com/temken/libphysica): Automatically downloaded to */external/obscura/external/*, compiled, and linked by CMake.
- [obscura](https://github.com/temken/obscura): Automatically downloaded to */external/*, compiled, and linked by CMake.


<details><summary>Installation of boost</summary>
<p>

```
>brew install boost
```

or alternatively with APT:

```
>sudo apt-get install libboost-all-dev
```

</p>
</details>

<details><summary>Installation of libconfig</summary>
<p>
This installation is optional, since `libphysica` will install it automatically, if it is not available.

On Macs, it can be on installed using [homebrew](https://brew.sh/)

```
>brew install libconfig
```

or using APT on Linux machines

```
>sudo apt-get update -y
>sudo apt-get install -y libconfig-dev
```

Alternatively, it can be built from the source files via

```
>wget https://hyperrealm.github.io/libconfig/dist/libconfig-1.7.2.tar.gz
>tar -xvzf libconfig-1.7.2.tar.gz
>pushd libconfig-1.7.2
>./configure
>make
>sudo make install
>popd
```

</p>
</details>

</p>
</details>

<details><summary>2. Downlad & Installation</summary>
<p>
The SOFTWARENAME source code can be downloaded by cloning this git repository:

```
>git clone https://github.com/temken/SOFTWARENAME.git 
>cd SOFTWARENAME
```

The code is compiled and the executable is created using CMake.

```
>cmake -E make_directory build
>cd build
>cmake -DCMAKE_BUILD_TYPE=Release -DCODE_COVERAGE=OFF ..
>cmake --build . --config Release
>cmake --install .
```

If everything worked well, there should be the executable *SOFTWARENAME* in the */bin/* folder.

</p>
</details>

<details><summary>3. Usage</summary>
<p>
Once SOFTWARENAME is installed, it can run by running the following command from the */bin/* folder:

```
>./SOFTWARENAME config.cfg
```

</p>
</details>

## Version History

- xx.xx.20xx: Release of version 0.1.0

## Everything else

<details><summary>Citing SOFTWARENAME</summary>
<p>

If you decide to use this code, please cite the latest archived version,

> Emken, T., 20xx, SOFTWARENAME [Code, v0.1.0], Astrophysics Source Code Library, record [[ascl:xxxx.xxx]](https://ascl.net/xxxx.xxx), [[DOI:10.5281/zenodo.xxxxxxx]](https://doi.org/10.5281/zenodo.xxxxxxx)

Bibtex entry:

```
@software{SOFTWARENAME,
  author = {Emken, Timon},
  title = {{SOFTWARENAME [Code, v0.1.0]}},
  year         = {20xx},
  publisher    = {Zenodo},
  version      = {v0.1.0},
  doi          = {DOI:10.5281/zenodo.xxxxxxx},
  url          = {https://doi.org/10.5281/zenodo.xxxxxxx},
  howpublished={Astrophysics Source Code Library record \href{https://ascl.net/xxxx.xxx}{[ascl:xxxx.xxx]}. The code can be found under \url{https://github.com/temken/SOFTWARENAME}. Version 0.1.1 is archived as \href{https://doi.org/10.5281/zenodo.xxxxxxx}{DOI:10.5281/zenodo.5957388}}
}
```

<!-- As well as the original publications,

> authors , year,  **title**, [[arXiv:xxxx.xxxxx]](https://arxiv.org/abs/xxxx.xxxxx). -->

</p>
</details>

<details><summary>Author & Contact</summary>
<p>

The author of SOFTWARENAME is Timon Emken.

For questions, bug reports or other suggestions please open an [issue](https://github.com/temken/SOFTWARENAME/issues).
</p>
</details>

<details><summary>License</summary>
<p>

This project is licensed under the MIT License - see the LICENSE file.

</p>
</details>