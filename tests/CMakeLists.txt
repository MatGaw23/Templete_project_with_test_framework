
cmake_minimum_required(VERSION 3.10)

project(tests_templete)

add_subdirectory(unit_test_frameworks)

set(SRC_FILES
    ${PROJECT_SOURCE_DIR}/src/templete_test_code.c
    ${PROJECT_SOURCE_DIR}/test_runners/templete_test_runner.c
    ${PROJECT_SOURCE_DIR}/test_runners/all_tests_runner.c
    )

add_executable(test_templete ${SRC_FILES})

add_test(NAME TEMPLETE_TEST COMMAND tests_templete)

