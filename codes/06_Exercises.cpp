#include <iostream>
using namespace std;

// 직사각형 모양(x,y 행렬)으로 별을 찍어내는 함수
void print_rectangle_stars(int x, int y) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

// 트리 모양으로 별을 찍어내는 함수
void print_tree_stars(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

// 뒤집힌 트리 모양으로 별을 찍어내는 함수
// 이젠 틀리지 말기!
void print_reversed_tree_stars(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n - i); j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  print_rectangle_stars(3, 5);
  cout << endl;

  print_tree_stars(5);
  cout << endl;

  print_reversed_tree_stars(5);
  cout << endl;

  return 0;
}