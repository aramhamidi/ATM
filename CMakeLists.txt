cmake_minimum_required(VERSION 3.0)
project(ATM_project)
set(ATM_VERSION_MAJOR 1)
set(ATM_VERSION_MINOR 0)

file(GLOB SOURCE "src/*.cpp")
configure_file("${PROJECT_SOURCE_DIR}/src/ATMConfig.h.in"
               "include/ATMConfig.h")



include_directories(include)

add_executable(atmEXE ${SOURCE})
install(TARGETS atmEXE DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/ATMConfig.h"
        DESTINATION include)
