
#include <iostream>

int main() {
  int maxNum = 0;
  std::cin >> maxNum;

  for (int i = 2; i <= maxNum; ++i) {
    bool isPrime = true;

    for (int j = 2; j <= i/2; ++j) {
      if ((i % j) == 0) {
        isPrime = false;
        // std::cout << "(" << i << "," << j << ")" << std::endl;
        break;
      }
    }
    if (isPrime) {
      std::cout << i << std::endl;
    }
  }
}

