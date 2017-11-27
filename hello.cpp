#include <iostream>

int main() {
  int a;
  std::cout << "hello, world!" << std::endl;
  std::cout << "please input integer, 5 times" << std::endl;
  int total;
  for (int i = 0; i < 5; i++) {
    std::cin >> a;
    total += a;
  }
  std::cout << "computing";
  std::cout << "sum of numbers you input: " << total << std::endl;
  return 0;
}
