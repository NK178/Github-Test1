
#include <iostream>

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
    std::cout << "Land of the rising Sun\n";
}

