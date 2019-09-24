#include <iostream>

int main(int argc, char *argv[])
{
  int count {0};
  std::cin >> count;

  for(int i {0}; i < count; ++i)
  {
    std::string word {};
    std::cin >> word;
    std::cout << word.substr(0, word.size() / 2) << std::endl;
  }
  return 0;
}
