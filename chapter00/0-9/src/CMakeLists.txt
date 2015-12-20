#
# BUILD EXERCISE00-09
#

set(TARGET Exercise00-09)

# Specify plugin source and includes
set( SRC Exercise0-9.cpp )

# And required includes
#include_directories("../include")

# Create target for all source
add_executable(${TARGET} ${SRC})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

install(TARGETS ${TARGET} DESTINATION bin)


