#include <iostream>
#include <string>

std::string GetHexadecimalValue(const int rest)
{
  if(rest == 10)
    return "A";
  else if(rest == 11)
    return "B";
  else if(rest == 12)
    return "C";
  else if(rest == 13)
    return "D";
  else if(rest == 14)
    return "E";
  else if(rest == 15)
    return "F";
  else
    return std::to_string(rest);
}

std::string GetElevendecimalValue(const int rest)
{
  if(rest == 10)
    return "A";
  else
    return std::to_string(rest);
}

std::string CountResultForSystem(int value, const bool useHexadecimal)
{
  std::string result {""};
  const int systemValue = useHexadecimal ? 16 : 11; 
  while(true)
  {
    int rest {value%systemValue};
    if(value != 0)
      result += useHexadecimal ? GetHexadecimalValue(rest)
                               : GetElevendecimalValue(rest);
    
    value = static_cast<int>(value/systemValue);
    if(value == 0)
      break;
  }

  return {result.rbegin(), result.rend()};
}

int main(int argc, char *argv[])
{
  int tests {0};
  std::cin >> tests;
  for(int i {0}; i < tests; ++i)
  {
    int value {0};
    std::cin >> value;
    std::cout << CountResultForSystem(value, true)
              << " " << CountResultForSystem(value, false) << std::endl;
  }
  return 0;
}
