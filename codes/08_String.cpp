#include <iostream>

using namespace std;

int main()
{
  // C++에서 문자열은 char의 배열(array).

  char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // 문자열을 적을 때 반드시 마지막엔 '\0'을 넣어주기!
  char greeting2[] = "Hello";                           // 이런 식으로 적을 때에는 마지막 문자열엔 자동으로 '\0'이 들어갑니다.

  cout << "String 1: " << greeting1 << endl;
  cout << "String 2: " << greeting2 << endl;

  return 0;
}