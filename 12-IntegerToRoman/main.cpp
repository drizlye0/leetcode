#include <iostream>
#include <string>
#include <unordered_map>


class Solution {
public:
  std::string intToRoman(int num) {
    std::unordered_map<int, std::string> map = {
      {1000, "M"},
      {900, "CM"},
      {500, "D"},
      {400, "CD"},
      {100, "C"},
      {90, "XC"},
      {50, "L"},
      {40, "XL"},
      {10, "X"},
      {9, "IX"},
      {5, "V"},
      {4, "IV"},
      {1, "I"}
    };

    for(const auto& [key , value]: map) {
      std::cout << key << value << "\n";
    }

    return  "";
    }
};


int main() {
  Solution s;
  s.intToRoman(100);

  return 0;
}
