cmake_minimum_required(VERSION 3.10)

project(Template)

set(INCLUDE_DIRS
    ${PROJECT_SOURCE_DIR}/src
    )

set(C_SRC
    ${PROJECT_SOURCE_DIR}/src/templete.c
    )

add_subdirectory(tests)
add_executable(Templete "${C_SRC}")
target_include_directories(Templete PUBLIC
                            "${INCLUDE_DIRS}"
                          )