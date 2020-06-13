#include <iostream>
#include <gtest/gtest.h>
#include <thread>
#include "../include/threadsafe.hpp"

TEST (suite_singleton_thread_safety, test_simple_constructor) {
    Singleton * current_address = Singleton::Get();
    for (int i=0; i<2; i++) {
        void * old_address = current_address;
        current_address = Singleton::Get();
        std::clog << "address " << i << ": " << current_address << std::endl;
        ASSERT_EQ(old_address, current_address);
    }
}

TEST (suite_singleton_thread_safety, test_multithread) {
    // TODO
    int singleton = 42;
    ASSERT_NE (singleton, 0);
}

