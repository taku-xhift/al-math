
#include <iostream>
#include <iomanip>

int main() {
  int64_t num = 0;
  std::cin >> num;

  double ret = .0;
  for (int64_t i = 1; i <= num; ++i) {
    ret += (double)num/i;
  }
  
	std::cout << std::fixed << std::setprecision(6);
  std::cout << ret << std::endl;
}


