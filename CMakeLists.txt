cmake_minimum_required(VERSION 3.10)
project(CircuralBuffer)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc)

add_subdirectory(src)
add_subdirectory(tst)


add_custom_target(br
  COMMAND +make
  COMMAND +make run
)

add_custom_target(cbr
  COMMAND +make clean
  COMMAND +make
  COMMAND +make run
)

