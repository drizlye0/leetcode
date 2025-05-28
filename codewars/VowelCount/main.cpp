#include <iostream>
#include <string>

int getCount(const std::string& inputStr){
  int num_vowels = 0;
  for (auto &elem : inputStr) {
    if(elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u') {
      num_vowels++;
    }
  }

  return num_vowels;
}

int main() {
  int vowels = getCount("adfasf");
  std::cout << vowels;
}
