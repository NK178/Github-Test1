
#include <iostream>
#include "Windows.h"

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 0x0A);

    std::cout << "Land of the rising Sun\n";
    std::cout << "Main 1 test - Ainsley\n";

    std::cout << "Test 2 - Wilson" << std::endl;
    std::cout << "Test 3 - Mathea" << std::endl;
    //fdghfhfh
}

