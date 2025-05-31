#include <vector>

int findSmallest(std::vector<int> list) { 
  int pivot = list[0]; for (const auto &elem : list) {
    if(elem < pivot) {
      pivot = elem;
    }
  }

  return pivot;
}

int main() {
  findSmallest({3,5,2});
}
