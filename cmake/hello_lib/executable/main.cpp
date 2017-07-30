#include <iostream>
#include "../library/library.cpp"
int main(int argc, char ** argv)
{
    std::cout << "Hello world!" << std::endl;
    Library library;
    library.helloLibrary();   
    return 0;
}
