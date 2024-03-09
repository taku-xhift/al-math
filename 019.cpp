
#include <iostream>

int64_t Comb(int64_t lhs, int64_t rhs) {
  int64_t ret = 1;
  if (lhs == 0) {
    return ret;
  }

  // rhs = std::min(rhs, lhs - rhs);
  for (int64_t i = 0; i < rhs; ++i) {
    ret *= (lhs - i);
  }
  for (int64_t i = 0; i < rhs; ++i) {
    ret /= (rhs - i);
  }

  return ret;
}

int main() {
  int64_t num = 0;
  int64_t count[3] = {0};
  std::cin >> num;
  int64_t tmp = 0;
  for (int64_t i = 0; i < num; ++i) {
    std::cin >> tmp;
    ++count[tmp -1];
  }

  // std::cout << Comb(count[0], 2) + Comb(count[1], 2) + Comb(count[2], 2) << std::endl;
  std::cout << count[0]*(count[0] -1)/ 2 + count[1]*(count[1] -1)/ 2 + count[2]*(count[2] -1)/ 2 << std::endl;
}

