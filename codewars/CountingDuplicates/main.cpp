#include <map>
#include <string>

std::size_t duplicateCount(const std::string& in) {
  if(in == "") {
    return 0;
  }
  std::map<char, int> literals;
  int duplicates = 0;
  for (const auto &literal : in) {
    char letter = std::tolower(literal);
    literals[letter]++;
  }

  for (const auto[index, value] : literals) {
    if(value > 1) {
      duplicates++;
    }
  }

  return duplicates;
}

int main()
{
  duplicateCount("aasdddlkkfj");
  return 0;
}
