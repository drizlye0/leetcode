#include <cmath>
#include <iostream>

long long rowSumOddNumbers(unsigned n) {
  long long sum = std::pow(n, 3);
  return sum;
}

int main() {
  long long sum = rowSumOddNumbers(42);
  std::cout << sum;
  return 0;
}
