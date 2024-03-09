
#include <iostream>

int64_t num = 0;
int64_t allA = 0;
int64_t allB = 0;


int main() {
  std::cin >> num;

  int64_t tmp = 0;
  for (int64_t i = 0; i < num; ++i) {
    std::cin >> tmp;
    allA += tmp;
  }
  for (int64_t i = 0; i < num; ++i) {
    std::cin >> tmp;
    allB += tmp;
  }
  double sum = (double)allA/3 + (double)allB/3 * 2;
  std::cout << sum << std::endl;
}

