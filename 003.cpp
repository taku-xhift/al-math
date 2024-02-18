
#include <iostream>
#include <algorithm>
#include <numeric>

int main() {
  int num = 0;
  int sum = 0;
  int val = 0;
  std::cin >> num;

  for (int i = 0; i < num; ++i) {
    std::cin >> val;
    sum += val;
  }

  std::cout << sum;
}

