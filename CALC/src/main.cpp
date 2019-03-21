#include <iostream>
#include <cstdint>

int main(int argc, char *argv[])
{
  int32_t first {0};
  int32_t second {0};
  char sign {'\0'};
  while(std::cin >> sign >> first >> second)
  {
    switch (sign)
    {
      case '+':
        std::cout << static_cast<int32_t>(first + second) << '\n';
        break;
      case '-':
        std::cout << static_cast<int32_t>(first - second) << '\n';
        break;
      case '*':
        std::cout << static_cast<int32_t>(first * second) << '\n';
        break;
      case '/':
        std::cout << static_cast<int32_t>(first / second) << '\n';
        break;
      case '%':
        std::cout << static_cast<int32_t>(first % second) << '\n';
        break;
    }   
  }
  return 0;
}
