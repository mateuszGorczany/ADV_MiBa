set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY} ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})

add_custom_target(run
	COMMAND ${BINARY}
	DEPENDS ${BINARY}
)

add_custom_target(check
	COMMAND valgrind ./${BINARY}
	DEPENDS ${BINARY}
)