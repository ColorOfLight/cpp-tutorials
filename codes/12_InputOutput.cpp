#include <iostream>

using namespace std;

int main()
{
  int a;
  char c[50];

  // C++ Style
  cout << "Please input integer a: ";
  cin >> a;  
  cout << "a: " << a << endl;
  
  cout << "Please input string c: ";
  cin >> c;
  cout << "c: " << c << endl;

  // C Style
  printf("Please input integer a: ");
  scanf("%d", &a);
  printf("a: %d\n", a);

  printf("Please input string c: ");
  scanf("%s", c);   /* c는 배열이라서 주소 지정을 위해 &를 넣을 필요가 없음 */
  printf("c: %s\n", c);

  return 0;
}