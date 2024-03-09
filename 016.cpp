
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
  int64_t num;
  std::cin >> num;
  std::vector<int64_t> list(num);
  for (int i = 0; i < num; ++i) {
    std::cin >> list[i];
  }
  std::sort(std::begin(list), std::end(list));

  int64_t ret = std::gcd(list[0], list[1]);

  for (auto i = 2; i < list.size() -1; ++i) {
    ret = std::gcd(ret, list[i]);
  }

  std::cout << ret << std::endl;
}

