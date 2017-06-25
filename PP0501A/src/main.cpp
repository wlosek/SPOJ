#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    std::ostringstream oss;
    for(int i = 0; i < tests; ++i)
    {
        int first {0};
        int second {0};

        std::cin >> first >> second;

        while(first != second)
        {
            if(first > second)
                first -= second;
            else
                second -= first;
        }

        oss << first << "\n";
    }

    std::cout << oss.str();

    return 0;
}
