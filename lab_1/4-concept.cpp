#include <iostream>

class Calculator {
public:
  int add(int a, int b) { return a + b; }
};

int main() {
  Calculator casio;
  std::cout << "Addition: " << casio.add(4, 8) << "\n";
  return 0;
}
