#include <iostream>
using namespace std;

// 주석은 이와 같이 '//'를 앞에 넣어서 사용합니다.

/*
  이렇게 여러 줄 주석을 넣을 수도 있습니다.
*/

int main() {
  // Data Types (8 bits = 1 byte)
  int i, j, k;        // 정수형 (4 bytes)
  char c;             // 문자형 (1 byte)
  float f;            // 부동 소수점; 소수형 (4 bytes)
  double d;           // 부동 소수점; 소수형 (8 bytes)
  bool b;             // True or False (1 bit)

  int x;              // 이렇게 변수를 자료형과 함께 선언하고,
  x = 10;             // 값을 할당할 수 있습니다.
  cout << "x: " << x << endl;

  double y = 20.0;    // 선언과 할당을 동시에 할 수도 있습니다.
  y = 30.5;           // 이렇게 다른 값을 할당할 수도 있습니다.
  cout << "y: " << y << endl;

  int z = 0;
  z += 1;             // z = z + 1; 즉. z = 0 + 1 이므로, z = 1이 됩니다.
  z++;                // 위와 똑같습니다; z = z + 1; 정확히는 다르지만 일단은 같다고 알고 있는걸로...
  cout << "z: " << z << endl;

  return 0;
}