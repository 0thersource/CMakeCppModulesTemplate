module;
#include <iostream>

export module TemplModule;

int hidden() {
    return 42;
}

export void printMessage() {
    std::cout << "The hidden value is " << hidden() << "\n";
}