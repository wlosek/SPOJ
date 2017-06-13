#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

bool IsPrime(const int number)
{
    if(number <= 1)
        return false;
    else if(number <= 3)
        return true;
    else if(number % 2 == 0 || number % 3 == 0)
        return false;

    int i = 5;
    while(i * i <= number)
    {
        if(number % i == 0 || number % (i + 2) == 0)
            return false;
        i = i + 6;
    }

    return true;
}

int main(int argc, char *argv[])
{
    std::string strCounter;
    std::getline(std::cin, strCounter);
    const int counter {std::stoi(strCounter)};

    std::vector<std::string> output;
    for(size_t i = 0; i < counter; ++ i)
    {
        std::string temp;
        std::getline(std::cin, temp);
        std::istringstream stream(temp);
        std::vector<std::string> tokens{std::istream_iterator<std::string>{stream},
                                        std::istream_iterator<std::string>{}};

        const int first = std::stoi(tokens.front());
        const int second = std::stoi(tokens.back());
        for(int j = first; j <= second; ++j)
        {
            if(IsPrime(j))
            {
                output.push_back(std::to_string(j));
                output.push_back("\n");
            }
        }

        if(i != counter - 1)
            output.push_back("\n");
    }

    std::copy(output.begin(), output.end(), std::ostream_iterator<std::string>(std::cout, ""));

    return 0;
}
