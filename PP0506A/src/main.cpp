#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

struct Point
{
    std::string name;
    int x;
    int y;
    double distance;
};

int main(int argc, char *argv[])
{
    int tests {0};
    std::cin >> tests;

    for(int i = 0; i < tests; ++i)
    {
        std::vector<Point> points;
        int countPoints {0};
        std::cin >> countPoints;

        for(int j = 0; j < countPoints; ++j)
        {
            Point point;
            std::cin >> point.name >> point.x >> point.y;
            point.distance = [point](){return sqrt(pow(point.x, 2) + pow(point.y, 2));}();
            points.push_back(point);
        }
        std::sort(std::begin(points), std::end(points),
                  [](Point a, Point b){return a.distance < b.distance;});

        for(const Point p : points)
            std::cout << p.name << " " << p.x << " " << p.y << std::endl;
    }
    return 0;
}
