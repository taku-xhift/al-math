
#include <iostream>

int64_t GCD(int64_t a, int64_t b) {
  while (a >= 1 && b >= 1) {
    if (a < b) {
      b %= a;
    } else {
      a %= b;
    }
  }

  if (a >= 1) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int64_t a;
  int64_t b;

  std::cin >> a >> b;
  std::cout << GCD(a, b) << std::endl;
}

