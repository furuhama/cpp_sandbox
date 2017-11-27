#include <iostream>

int main() {
  using std::cout;
  using std::cin;
  using std::endl;

  int a;
  cout << "hello, world!" << endl;
  cout << "please input integer, 5 times" << endl;
  int total;
  for (int i = 0; i < 5; i++) {
    cin >> a;
    total += a;
  }
  cout << "computing";
  cout << "sum of numbers you input: " << total << endl;
  return 0;
}
