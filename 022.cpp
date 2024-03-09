
#include <algorithm>
#include <iostream>
// #include <numerics>
#include <vector>
#include <utility>

int main() {
  int64_t num = 0;
  std::cin >> num;
  std::vector<int64_t> list(num);
  for (int64_t i = 0; i < num; ++i) {
    std::cin >> list[i];
  }

  // 数える
  int64_t count[100000] = {0};
  for (int64_t i = 0; i < num; ++i) {
    ++count[list[i]];
  }

  // 積の法則で組み合わせを数える
  int64_t result = 0;
  for (int64_t i = 0; i < 50000; ++i) {
    result += count[i] * count[100000 -i];
  }

  // これだけ 50000 同士で区別がつかないので同色カードの組み合わせと考えて x(x-1)/2 を数える
  result += count[50000] * (count[50000] -1) / 2;

  std::cout << result << std::endl;
}

