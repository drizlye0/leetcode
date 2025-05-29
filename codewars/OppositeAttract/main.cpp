#include <iostream>

bool lovefunc(int f1, int f2) {  
  if(f1 % 2 == 0){
    if(f2 % 2 == 1) {
      return true;
    }
  }

  if(f1 % 2 == 1) {
    if(f2 % 2 == 0) {
      return true;
    }
  }

  return false;
}

int main() {
  bool a = lovefunc(0, 3);
  std::cout << a;
}
