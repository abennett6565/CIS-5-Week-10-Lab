#include <iostream>

using std::cout;
using std::endl;

// Lab 10 — Andrew Bennett
// CIS 5 Week 10 · References & pointers

void swap_values(int& a, int& b) {
  int holder = 0;
  holder = a;
  a = b;
  b = holder;
}

int main() {
  int x = 3, y = 7;

  cout << "Before: " << x << " " << y << endl;

  swap_values(x, y);

  cout << "After: " << x << " " << y << endl;

  int* p = &x;

  cout << "*p: " << *p << endl;

  return 0;
}
