#include <iostream>

class Reader {
public:
  int a;

  void setInt() {
    std::cout << "Enter a: ";
    std::cin >> a;
  }

  int getInt() { return a; }
};

class Copier {
public:
  int a;

  Copier(int a) { this->a = a; }

  int increment() { return a + 1; }
};

int main() {
  Reader r;
  r.setInt();

  Copier c(r.getInt());

  std::cout << "Yudin Karki\n";

  return 0;
}
