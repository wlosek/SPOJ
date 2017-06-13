#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int counter {0};
    std::cin >> counter;

    std::string output;
    for(size_t i = 0; i < counter; ++ i)
    {
        int value;
        std::cin >> value;
        switch (value) {
        case 0:
        case 1:
            output += "0 1\n";
            break;
        case 2:
            output += "0 2\n";
            break;
        case 3:
            output += "0 6\n";
            break;
        case 4:
            output += "2 4\n";
            break;
        case 5:
        case 6:
        case 8:
            output += "2 0\n";
            break;
        case 7:
            output += "4 0\n";
            break;
        case 9:
            output += "8 0\n";
            break;
        default:
            output += "0 0\n";
            break;
        }
    }

    std::cout << output;

    return 0;
}
