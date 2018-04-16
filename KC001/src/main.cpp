#include <iostream>

#define NUMBER_OF_VALUES 3

int main(int argc, char *argv[])
{
    int result = {0};
    for(int i = 0; i < NUMBER_OF_VALUES; ++i)
    {
        static int val = {0};
        std::cin >> val;
        result += val;
    }

    std::cout << result;

    return 0;
}
