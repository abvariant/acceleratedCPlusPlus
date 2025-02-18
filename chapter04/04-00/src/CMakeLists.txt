#
# BUILD EXERCISE04-00
#

set(TARGET Exercise04-00)

# Specify plugin source and includes
set( SRC Exercise04-00.cpp Student_info.cpp grade.cpp median.cpp )

# Create target for all source
add_executable(${TARGET} ${SRC})

# And required includes
#include_directories("../include")
target_include_directories(${TARGET} PRIVATE .)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

install(TARGETS ${TARGET} DESTINATION bin)
