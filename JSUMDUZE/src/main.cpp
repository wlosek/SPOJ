#include <iostream>
#include <string>
#include <utility>

void NormalizeString(std::string& stringToNormalize, int len)
{
  std::string tempStr(len, '0');
  tempStr += stringToNormalize;
  std::swap(tempStr, stringToNormalize);
}

int main(int argc, char *argv[])
{
  int tests {0};
  std::cin >> tests;
  for(int i = 0; i < tests; ++i)
  {
    std::string first{}, second{};
    std::cin >> first >> second;

    const auto firstSize {first.size()};
    const auto secondSize {second.size()};
    if(firstSize > secondSize)
      NormalizeString(second, static_cast<int>(firstSize - secondSize));
    else if(firstSize < secondSize)
      NormalizeString(first, static_cast<int>(secondSize - firstSize));

    std::string result{};
    int rest {0};
    auto firstIter = first.rbegin();
    auto secondIter = second.rbegin();
    while(firstIter != first.rend() && secondIter != second.rend())
    {
      int firstValue {0};
      if(firstIter != first.rend())
      {
        firstValue = static_cast<int>(*firstIter) - 48;
      }

      int secondValue {0};
      if(secondIter != second.rend())
      {
        secondValue = static_cast<int>(*secondIter) - 48;
      }

      auto sum {firstValue + secondValue + rest};
      rest = sum > 9 ? 1 : 0;
      result += std::to_string(sum % 10);
      firstIter++;
      secondIter++;
    }

    if(rest > 0)
      result += std::to_string(rest);

    std::cout << std::string{result.rbegin(), result.rend()} << std::endl;
  }
  return 0;
}