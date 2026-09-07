#include <iomanip>
#include <iostream>

int main() {
  int num = 12345;
  std::cout << "setw(10)=" << std::setw(10) << num << std::endl;
  std::cout << "setw(20)=" << std::setw(20) << num << std::endl;

  std::cout << "Yudin Karki\n";
  return 0;
}
