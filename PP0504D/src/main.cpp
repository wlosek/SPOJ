#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    std::ostringstream resultOss;
    for(int i = 0; i < tests; ++i)
    {
        std::string value;
        std::ostringstream oss;
        union {float fValue; int iValue;};
        std::cin >> fValue;

        if(fValue == 0.0)
        {
            resultOss << "0 0 0 0" << std::endl;
            continue;
        }

        oss << std::hex << iValue << std::endl;
        value = oss.str();

        for(int i = 0; i < value.size() - 1; i += 2)
        {
            const char first = value.at(i);
            const char second = value.at(i+1);

            if(first == '0' && second == '0')
                resultOss << '0';
            else if(first == '0' && second != '0')
                resultOss << second;
            else
                resultOss << first << second;
            resultOss << " ";
        }

        resultOss << std::endl;
    }

    std::cout << resultOss.str();

    return 0;
}
