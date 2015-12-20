#
# BUILD EXERCISE00-02
#

set(TARGET Exercise00-02)

# Specify plugin source and includes
set( SRC Exercise0-2.cpp )

# And required includes
#include_directories("../include")

# Create target for all source
add_executable(${TARGET} ${SRC})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

install(TARGETS ${TARGET} DESTINATION bin)


