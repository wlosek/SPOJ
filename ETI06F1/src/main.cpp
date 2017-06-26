#include <iostream>
#include <cmath>
#include <cstdio>

#define PI 3.141592654

int main(int argc, char *argv[])
{
    double r {0.0};
    double d {0.0};
    std::cin >> r >> d;

    const double halfd = d / 2.0;
    const double a2 = (r*r) - (halfd*halfd);
    const double a = std::sqrt(a2);

    const double area = PI * a * a;

    printf("%10.2f\n", area);

    return 0;
}
