#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    std::ostringstream oss;
    for(int i = 0; i < tests; ++i)
    {
        int sum {0};
        int numbers {0};
        std::cin >> numbers;

        for(int j = 0; j < numbers; ++j)
        {
            int tempValue {0};
            std::cin >> tempValue;
            sum += tempValue;
        }

        oss << sum << "\n";
    }

    std::cout << oss.str();

    return 0;
}
