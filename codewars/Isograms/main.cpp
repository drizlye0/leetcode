#include <string>
#include <unordered_map>

bool is_isogram(const std::string &str) {
  std::unordered_map<char, int> letters;

  for (const auto &literal : str) {
    char letter = std::tolower(literal);
    if (letters[letter]) {
      return false;
    }

    letters[letter] = 1;
  }

  return true;
}

int main() {
  bool a = is_isogram("hoOla");
  return 0;
}
