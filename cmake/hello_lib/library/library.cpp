
//This file contains a sample C++ module to generate a

#include "library.h"
#include <iostream>

Library::Library()
{
    this->var1 = 1000;
}

Library::~Library()
{
}

void Library::helloLibrary()
{
    std::cout << "Hello library: " << this->var1 << std::endl;
}
