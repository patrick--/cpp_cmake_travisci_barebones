cmake_minimum_required(VERSION 3.5)

project(cpp_cmake_travisci_barebones)

set(SOURCES
  src/main.cpp
  src/public_api.cpp
  src/private_api.cpp
)

add_executable(cpp_cmake_travisci_barebones ${SOURCES})

target_include_directories(cpp_cmake_travisci_barebones
  PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
