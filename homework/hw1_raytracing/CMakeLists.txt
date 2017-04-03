project(hw1_raytracing)
cmake_minimum_required(VERSION 2.8)
add_definitions(-std=c++11)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

aux_source_directory(src/ SRC_LIST)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(hw1_raytracing ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )

