#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
  int x = 3;
  int y[2] = {0, 1};

  cout << x << endl;
  cout << &x << endl;
  cout << &y << endl;
  cout << y << endl;

  return 0;
}