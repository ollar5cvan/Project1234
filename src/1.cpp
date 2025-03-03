#include <iostream>

int main() {
  int x = 5;
  std::cout << "Hello, World!" << std::endl;
  std::cin >> x;
  if (x > 10) {
    std::cout << "x is greater than 10" << std::endl;
  } else {
    std::cout << "x is less than or equal to 10" << std::endl;
  }
  return 0;
}
