#include <iostream>

class Set {
public:
  int m, n;

  void input(void) {
    std::cout << "Input value for m and n: ";
    std::cin >> m >> n;
  }

  int largest(void) { return m >= n ? m : n; }

  void display(void) { std::cout << "Largest Value = " << largest() << "\n"; }
};

int main() {
  Set A;

  A.input();
  A.display();

  return 0;
}
