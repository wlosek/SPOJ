#include <iostream>
#include <deque>

int main(int argc, char *argv[])
{
  int nrOfTests {0};
  std::cin >> nrOfTests;

  for(int i {0}; i < nrOfTests; ++i)
  {
    int count {0};
    int firstValue {0};
    std::cin >> count;
    std::deque<int> tempCont;
    for(int j {0}; j < count; ++j)
    {
      int tempVal {0};
      std::cin >> tempVal;
      if(j == 0)
      {
        firstValue = tempVal;
        continue;
      }
      
      tempCont.push_back(tempVal); 

      if (j == count - 1)
        tempCont.push_back(firstValue);
    }

    for(int val : tempCont)
      std::cout << val << " ";

    std::cout << std::endl;
  }

  return 0;
}
