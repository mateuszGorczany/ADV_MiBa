cmake_minimum_required(VERSION 3.10)
project(CircuralBuffer)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_subdirectory(source)
add_subdirectory(test)


add_custom_target(br
  COMMAND +make
  COMMAND +make run
)

add_custom_target(bt
  COMMAND +make
  COMMAND +make test
)

add_custom_target(cbr
  COMMAND +make clean
  COMMAND +make
  COMMAND +make run
)

add_custom_target(cbt
  COMMAND +make clean
  COMMAND +make
  COMMAND +make test 
)
