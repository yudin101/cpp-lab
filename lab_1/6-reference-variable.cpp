#include <iostream>

int main() {
  int n = 10;
  int &m = n;

  std::cout << "m=" << m << "\n";
  std::cout << "n=" << n << "\n";
  n++;
  std::cout << "m=" << m << "\n";
  std::cout << "n=" << n << "\n";

  return 0;
}
