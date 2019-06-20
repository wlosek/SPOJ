#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
  int tests {0};
  std::cin >> tests;
  for(int i {0}; i < tests; ++i)
  {
    int value {0};
    std::cin >> value;
    std::cout << std::pow(value, 2) << std::endl;
  }

  return 0;
}
