#include <iostream>
#include <sstream>

int Reverse(int value)
{
    int reversedNum {0};
    int reminder {0};

    while(value != 0)
    {
        reminder = value % 10;
        reversedNum = reversedNum * 10 + reminder;
        value /= 10;
    }

    return reversedNum;
}

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    std::ostringstream oss;
    for(int i = 0; i < tests; ++i)
    {
        int counter {0};
        int value {0};
        std::cin >> value;

        int reverseValue = Reverse(value);
        while(value != reverseValue)
        {
            value += reverseValue;
            reverseValue = Reverse(value);
            counter ++;
        }

        oss << reverseValue << " " << counter << "\n";
    }

    std::cout << oss.str();

    return 0;
}
