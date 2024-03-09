
#include <iostream>
#include <vector>

int64_t nCr(int64_t n, int64_t r) {
  int64_t ret = 1;
  std::vector<int64_t> divs;

  for (int64_t i = 0; i < r; ++i) {
    ret *= (n - i);
    if (ret % (r-i) == 0) {
      ret /= (r-i);
    } else {
      divs.push_back(r-i);
    }
  }

  for (const auto& elm : divs) {
    ret /= elm;
  }

  return ret;
}

int main() {
  int64_t n = 0;
  int64_t r = 0;

  std::cin >> n >> r;
  std::cout << nCr(n, r) << std::endl;
}


