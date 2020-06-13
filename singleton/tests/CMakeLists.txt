cmake_minimum_required(VERSION 3.16)
find_package(Threads REQUIRED)

set(Sources
    test_thread_safety.cpp
)

set(thread_test test_thread_safety)

add_executable(${thread_test}
    ${Sources}
)

target_link_libraries(${thread_test} PRIVATE
        gtest_main
        singleton_thread
        Threads::Threads
)

enable_testing()

add_test(
        NAME ${thread_test}
        COMMAND test_thread_safety
)
