#include <iostream>

int main(int argc, char *argv[])
{
    int value {0};
    while(std::cin >> value && value != 42)
        std::cout << value << std::endl;

    return 0;
}
