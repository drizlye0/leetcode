#include <vector>

int count_sheep(std::vector<bool> arr) 
{
  int length = std::size(arr);
  int isFalse = 0;
  for (const auto &elem : arr) 
  {
    if(elem != true) 
    {
      isFalse++;
    }
  }
  return length - isFalse;
}
