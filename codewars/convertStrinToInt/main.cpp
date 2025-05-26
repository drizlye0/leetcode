#include <string>

int string_to_number(const std::string& s) {
  int number = 0;
  bool isNegative = false;

  for(const auto& c: s) {
    int val = c - '0';
    if(val == -3) {
      isNegative = true;
      continue;
    }
    if(number != 0) {
      number = number * 10;
      number += val;
      continue;
    }
    number += val;
  }

  if(isNegative) {
    return number * -1;
  }

  return number;
}

int main() {
  int number = string_to_number("90");
  return 0;
}
