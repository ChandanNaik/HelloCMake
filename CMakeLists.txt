cmake_minimum_required(VERSION 3.9.1)

project("CMakeHello") 

set(CMAKE_CXX_STANDARD 14)

add_executable("${PROJECT_NAME}" main.cpp)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)  # ${CMAKE_INSTALL_PREFIX}/bin

install(FILES "main.cpp" DESTINATION src)  # ${CMAKE_INSTALL_PREFIX}/src

include(CTest)

add_test("test1" "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}")

