
#include <iostream>
#include <random>
#include <ehdata_forceinclude.h>
#include "Windows.h"

/*
ITINERARY FOR TODAY
-------------------
Today is February 17, Monday


To-do:

- Player class
- Movement class
- Camera class
- Devise tree

Doing:



Done:




*/

void handleColour()
{
    srand(time(0));
    int random = rand() % 15;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    if (random <= 9)
    {
        SetConsoleTextAttribute(h, 0x0 + random);
    }
    else
    {
        switch (random)
        {
        case 10:
            SetConsoleTextAttribute(h, 0x0A);
        case 11:
            SetConsoleTextAttribute(h, 0x0B);
        case 12:
            SetConsoleTextAttribute(h, 0x0C);
        case 13:
            SetConsoleTextAttribute(h, 0x0D);
        case 14:
            SetConsoleTextAttribute(h, 0x0E);
        default:
            break;
        }
    }
}

int main()
{
    handleColour();

    std::cout << "Land of the rising Sun\n";
    std::cout << "Main 1 test - Ainsley\n";

    std::cout << "Test 2 - Wilson" << std::endl;
    std::cout << "Test 3 - Mathea" << std::endl;

  



}


