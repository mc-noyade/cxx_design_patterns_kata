#include<iostream>
#include "../include/threadsafe.hpp"

Singleton::Singleton() {
    std::clog << "Singleton " << &s_Instance << " constructor called." << std::endl;
}

Singleton::~Singleton() {
    std::clog << "Singleton " << &s_Instance << " destructor called." << std::endl;
}

Singleton* Singleton::Get(){
    return &s_Instance;
}

Singleton Singleton::s_Instance;