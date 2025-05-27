#include <algorithm>
#include <cinttypes>
#include <iostream>
#include <string>

uint64_t descendingOrder(uint64_t a)
{
  std::string str = std::to_string(a);
  std::sort(str.begin(), str.end(), std::greater<int>());

  a = 0;
  for (const auto &c : str)
  {
    int number = c - '0';
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
