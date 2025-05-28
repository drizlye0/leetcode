#include <iostream>
#include <vector>

int sum(std::vector<int> nums) {
  if (std::size(nums) == 0) {
    return 0;
  }

  int sum = 0;

  for (const auto &number : nums) {
    sum += number;
  }

  return sum;
}

int main() {
  int s = sum({12,312,-5,1231});
  std::cout << s;
  return 0;
}
