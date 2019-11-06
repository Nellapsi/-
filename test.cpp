#include <iostream>

int main() {
  int a, i;
  std::cout << " " << std::endl;
  std::cin >> a;
  for(i = 2; i < a; i++){
    if (a % i == 0) {
      std::cout << "ne prostoe" << std::endl;
    } else {
      std::cout << "prostoe" << std::endl;
    }
  }
  return 0;
}