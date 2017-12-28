#include <iostream>
#include <utility>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    for(int i = 0; i < tests; ++i)
    {
        std::pair<int, int> currentPosition = std::make_pair(0, 0);
        int numberOfDirectionsAndSteps {0};
        std::cin >> numberOfDirectionsAndSteps;

        for(int j = 0; j < numberOfDirectionsAndSteps; ++j)
        {
            int direction {0};
            int steps {0};
            std::cin >> direction >> steps;

            switch (direction) {
            case 0:
                currentPosition.second += steps;
                break;
            case 1:
                currentPosition.second -= steps;
                break;
            case 2:
                currentPosition.first -= steps;
                break;
            case 3:
                currentPosition.first += steps;
                break;
            default:
                break;
            }
        }

        if(currentPosition.first == 0 && currentPosition.second == 0)
        {
            std::cout << "studnia" << std::endl;
            continue;
        }

        if(currentPosition.second > 0)
            std::cout << 0 << " " << currentPosition.second << std::endl;
        else if(currentPosition.second < 0)
            std::cout << 1 << " " << abs(currentPosition.second) << std::endl;

        if(currentPosition.first > 0)
            std::cout << 3 << " " << currentPosition.first << std::endl;
        else if(currentPosition.first < 0)
            std::cout << 2 << " " << abs(currentPosition.first) << std::endl;
    }

    return 0;
}
