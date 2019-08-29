# C++ Cmake & TravisCI Barebones Example


### Overview
This is a small example of how to setup a C++ project using modern cmake and travis CI. 


### Cmake 

All the Cmake magic happens inside `CMakeLists.txt`. This is a very minimal example that simply demonstrates compiling a main application file that references two additional source and header files. The one thing worth mentioning is that the `/src` and `/include` structure is pretty standard. The idea is that header files associated with user or public facing APIs would go in `/include` and everything else would go in `/src`. 

### TravisCI

The `.travis.yml` file is also pretty basic. We select the bionic distro because we want access to more recent CMake and GCC versions. Having access to newer compiler versions is neccasary if you want to develop with newer versions of the language `C++14,17,etc`. This TravisCI config simply sets up the build directory, runs cmake and then executes the program so you can see output in the logs. 



