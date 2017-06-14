#include <iostream>
#include <sstream>

int GCD(int a, int b)
{
    int temp {0};

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int LCM(const int a, const int b)
{
    return a / GCD(a, b) * b;
}

int main(int argc, char *argv[])
{
    int counter {0};
    std::cin >> counter;

    std::ostringstream oss;
    for(int i = 0; i < counter; ++i)
    {
        int firstGroup {0};
        int secondGroup {0};
        std::cin >> firstGroup >> secondGroup;

        oss << LCM(firstGroup, secondGroup) << "\n";
    }

    std::cout << oss.str();

    return 0;
}
