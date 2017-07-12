#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    std::ostringstream oss;
    for(int i = 0; i < tests; ++i)
    {
        int numbersCounter {0};
        std::cin >> numbersCounter;

        std::vector<int> numbers(numbersCounter);
        for(int j = 0; j < numbersCounter; ++j)
            std::cin >> numbers.at(j);

        std::copy(numbers.rbegin(), numbers.rend(), std::ostream_iterator<int>(oss, " "));
        oss << "\n";
    }

    std::cout << oss.str();

    return 0;
}
