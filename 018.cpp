
#include <iostream>

int main() {
  int64_t array[4] = {0};
  int num = 0;
  int tmp = 0;

  std::cin >> num;
  for (int64_t i = 0; i < num; ++i) {
    std::cin >> tmp;
    ++array[tmp/100 - 1];
  }

  std::cout << array[0] * array[3] + array[1] * array[2] << std::endl;
}

