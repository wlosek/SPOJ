#include <iostream>
#include <list>
#include <iterator>

#define YES "TAK"
#define NO "NIE"

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
    int counter = 0;
    std::cin >> counter;

    std::list<std::string> output;
    for(size_t i = 0; i < counter; ++ i)
    {
        int value;
        std::cin >> value;

        if(IsPrime(value))
            output.push_back(YES);
        else
            output.push_back(NO);

        output.push_back("\n");
    }

    std::copy(output.begin(), output.end(), std::ostream_iterator<std::string>(std::cout, ""));

    return 0;
}
