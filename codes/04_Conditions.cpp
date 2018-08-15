#include <iostream>
using namespace std;


int main() {
  if (true) {
    // if 안의 조건이 true일 때에는 if 괄호 안의 코드가 실행됩니다.
    cout << "True~" << endl;
  }

  if (false) {
    // if 안의 조건이 false 일 때에는 실행되지 않습니다.
    cout << "True~" << endl;
  }
  else {
    // 만약 if 안의 조건이 false이고, else문이 있으면, else 괄호 안의 코드가 실행됩니다.
    cout << "False~" << endl;
  }

  int x = 3;
  if (x < 2) {
    cout << "3 < 2" << endl;
  }
  else if (x == 3) {
    // if 안의 조건이 틀렸을 때, else if를 통해 다른 조건을 확인할 수도 있습니다.
    cout << "3 == 3" << endl;
  }
  else {
    cout << "No answer!" << endl;
  }
  
  return 0;
}