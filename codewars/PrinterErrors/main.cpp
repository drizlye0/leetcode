#include <algorithm>
#include <string>

class Printer {
public:
  static std::string printerError(const std::string &s) {
    std::string range = "abcdefghijklm";
    int length = std::size(s);
    int wrongLetters = 0;

    for (const auto &letter : s) {
      auto found = std::find(range.begin(), range.end(), letter);
      if (found == range.end()) {
        wrongLetters++;
      }
    }

    char error_str[20];
    std::sprintf(error_str, "%d/%d", wrongLetters, length);

    return error_str;
  };
};

int main() {
  Printer print;
  auto s = print.printerError("asdgagsdxyy");
}
