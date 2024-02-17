
#include <iostream>
#include <algorithm>
#include <numeric>

int main() {
  int array[3] = {0};
  std::cin >> array[0] >> array[1] >> array[2];
  std::cout << std::accumulate(std::begin(array), std::end(array), 0) << std::endl;
}

