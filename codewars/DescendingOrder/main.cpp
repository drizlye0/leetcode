#include <algorithm>
#include <cinttypes>
#include <iostream>
#include <string>
#include <vector>

uint64_t descendingOrder(uint64_t a)
{
  std::vector<int> vec;
  while(a) {
    int num = a % 10;
    vec.push_back(num);
    a = a / 10;
  }

  std::sort(vec.begin(), vec.end(), std::greater<int>());
  std::string str = "";

  a = 0;

  for (const auto &number : vec)
  { 
    if (a == 0) {
      a += number;
      continue;
    }
    a = a * 10;
    a += number;
  }


  return a;
}

int main() {
  int a= descendingOrder(1235);
  std::cout << a;

  return 0;
}
