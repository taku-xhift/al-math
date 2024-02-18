
#include <iostream>

int main() {
  int64_t num = 0;
  std::cin >> num;

  while (true) {
    for (int64_t i = 2; i * i <= num;) {
      if ((num % i) == 0) {
        std::cout << i << " " << std::endl;
        num /= i;
        continue;
      }
      ++i;
    }
    std::cout << num << " " << std::endl;

    break;
  }
}

