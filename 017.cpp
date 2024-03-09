
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int64_t LCM(int64_t lhs, int64_t rhs) {
  return (lhs / std::gcd(lhs, rhs)) * rhs;
}

int main() {
  int64_t num;
  std::cin >> num;
  std::vector<int64_t> list(num);
  for (int i = 0; i < num; ++i) {
    std::cin >> list[i];
  }
  // std::sort(std::begin(list), std::end(list));

  // int64_t gcd = std::gcd(list[0], list[1]);
  // int64_t lcm = list[0] * list[1] / gcd;
  int64_t lcm = LCM(list[0], list[1]);

  // std::cout << gcd << " " << lcm << std::endl;

  for (auto i = 2; i < list.size(); ++i) {
    lcm = LCM(lcm, list[i]);
    // std::cout << gcd << " " << lcm << std::endl;
  }

  std::cout << lcm << std::endl;
}

