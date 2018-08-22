#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
  int x = 3;
  int y[2] = {0, 1};

  cout << "Value of x:   " << x << endl;
  cout << "Address of x: "<< &x << endl;  // &를 변수 앞에 붙이면 주소값이 됩니다.
  cout << "Value of y:   " << y << endl;  // 배열을 가리키는 변수 자체는 배열 첫번째 값의 주소입니다.
  cout << "Address of y: " << &y << endl;
  cout << "Address of y[0]: " << &y[0] << endl;

  return 0;
}