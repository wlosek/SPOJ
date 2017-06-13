#include <iostream>
#include <sstream>
#include <string>

int CheckBase2(int exponenet)
{
    exponenet = exponenet % 4;

    switch (exponenet)
    {
    case 0:
        return 6;
    case 1:
        return 2;
    case 2:
        return 4;
    case 3:
        return 8;
    }

    return 0;
}

int CheckBase3(int exponenet)
{
    exponenet = exponenet % 4;

    switch (exponenet)
    {
    case 0:
        return 1;
    case 1:
        return 3;
    case 2:
        return 9;
    case 3:
        return 7;
    }

    return 0;
}

int CheckBase4(int exponenet)
{
    exponenet = exponenet % 2;

    switch (exponenet)
    {
    case 0:
        return 6;
    case 1:
        return 4;
    }

    return 0;
}

int CheckBase7(int exponenet)
{
    exponenet = exponenet % 4;

    switch (exponenet)
    {
    case 0:
        return 1;
    case 1:
        return 7;
    case 2:
        return 9;
    case 3:
        return 3;
    }

    return 0;
}

int CheckBase8(int exponenet)
{
    exponenet = exponenet % 4;

    switch (exponenet)
    {
    case 0:
        return 6;
    case 1:
        return 8;
    case 2:
        return 4;
    case 3:
        return 2;
    }

    return 0;
}

int CheckBase9(int exponenet)
{
    exponenet = exponenet % 2;

    switch (exponenet)
    {
    case 0:
        return 1;
    case 1:
        return 9;
    }

    return 0;
}

int main(int argc, char *argv[])
{
    int counter {0};
    std::cin >> counter;

    std::ostringstream oss;
    for(int i = 0; i < counter; ++i)
    {
        std::string base;
        std::cin >> base;
        int exp;
        std::cin >> exp;

        switch (base.at(base.size() - 1)) {
        case '1':
            oss << "1\n";
            break;
        case '2':
            oss << CheckBase2(exp) << "\n";
            break;
        case '3':
            oss << CheckBase3(exp) << "\n";
            break;
        case '4':
            oss << CheckBase3(exp) << "\n";
            break;
        case '5':
            oss << 5 << "\n";
            break;
        case '6':
            oss << 6 << "\n";
            break;
        case '7':
            oss << CheckBase7(exp) << "\n";
            break;
        case '8':
            oss << CheckBase8(exp) << "\n";
            break;
        case '9':
            oss << CheckBase9(exp) << "\n";
            break;
        default:
            oss << "0\n";
            break;
        }
    }

    std::cout << oss.str();

    return 0;
}
