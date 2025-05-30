#include <iostream>
#include <string>

std::string number_to_string(int num) {
  if(num == 0) {
    return "0";
  }

  std::string str = "";
  bool isNegative = false;

  if (num < 0) { 
    isNegative = true;
    num = num * -1;
  }

  while (num) {
    int digit = num % 10;
    char c = digit + '0';
    str.insert(str.begin(), c);
    num = num / 10;
  }

  if(isNegative) {
    str.insert(str.begin(), '-');
  }

  return str;
}

int main() {
  std::string a = number_to_string(-20034);
  std::cout << a;
  return 0;
}
