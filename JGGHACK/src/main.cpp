#include <iostream>

#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
E 4
F 5
G 6
H 7
I 8
J 9
K 10
L 11
M 12
N 13
O 14
P 15
Druga litera Wartość
A 0
B 16
C 32
D 48
E 64
F 80
G 96
H 112
I 128
J 144
K 160
L 176
M 192
N 208
O 224
P 240 

int main(int argc, char *argv[])
{
  std::string value{};

  while(std::cin >> value)
  {
    std::string resultStr {};
    for(int i{0}; i < value.size(); i += 2)
    {
      char firstChar {value.at(i)};
      char secondChar {value.at(i+1)};

      int result = static_cast<int>(firstChar + secondChar);
      if(result >= 140)
        result -= 25;
      else
        result -= 40;
      
      resultStr += static_cast<char>(result);
    } 
    std::cout << resultStr << std::endl;
  }

  return 0;
}
