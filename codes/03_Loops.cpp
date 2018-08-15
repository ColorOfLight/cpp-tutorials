#include <iostream>
using namespace std;


int main() {
  // 반복문은 크게 while-loop와 for-loop가 있습니다.
  // do-while도 있지만 알아서 찾아보시길...

  // 아래 두 loop들은 같은 일을 수행합니다.

  int i = 0;
  while(i < 5) {    // 괄호 안의 조건에서 벗어날 때까지 계속 순환
    cout << "i: " << i << endl;
    i++;
  }

  cout << endl;

  for(int i = 0; i < 5; i++) {  // 초기값; 조건문; 각 루프마다 수행 (,로 헷갈리지 말기!)
    cout << "i: " << i << endl;
  }

  return 0;
}