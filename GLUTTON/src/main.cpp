#include <iostream>
#include <cmath>
#include <stdio.h>

#define DAYINSEC 86400

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    for(int i = 0; i < tests; ++i)
    {
        int glutton {0}, cookies {0}, allEaten {0};
        std::cin >> glutton >> cookies;
        for(int j = 0; j < glutton; ++j)
        {
            int time {0};
            std::cin >> time;
            allEaten += static_cast<int>(DAYINSEC / time);
        }
        const int boxes = static_cast<int>(std::ceil(static_cast<float>(allEaten) / cookies));
        printf("%d\n", boxes);
        allEaten = 0;
    }
    return 0;
}
