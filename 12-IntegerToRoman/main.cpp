#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::string intToRoman(int num) {
    std::string romanNumber = "";

    std::vector<std::pair<int, std::string>> val_sym_pairs =
    { {1000, "M"},
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
      {1, "I"} };


    for(const auto &[val, symbol]: val_sym_pairs) {
      while(num >= val) {
        romanNumber += symbol;
        num -= val;
      }
    }


    return romanNumber;
  }
};

int main() {
  Solution s;
  auto romanNumber = s.intToRoman(1908);
  std::cout << romanNumber << "\n";
  std::cout << "hola mundo";

  return 0;
}
