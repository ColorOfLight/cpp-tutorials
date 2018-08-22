#include <iostream>
using namespace std;

// 이렇게 함수를 선언할 수 있습니다.
int get_add(int a, int b) {
  // 처음 선언한 자료형과 같은 형식의 값을 return해야 합니다.
  return a + b;
}

// void 함수를 사용하면 return 값이 없는 함수를 만들 수 있습니다.
void print_hello_world() {
  cout << "Hello world" << endl;
}

void print_star_tree(int n) {
  for (int i=0; i < n;i++) {
    for (int j=0; j <= i; j++) {
      cout << '*';
    }
    cout << endl;
  }
}

int main() {
  int x = get_add(1, 2);  // 선언한 함수는 다음과 같이 사용이 가능합니다.
  cout << x << endl;

  print_hello_world();

  print_star_tree(6);

  return 0;
}