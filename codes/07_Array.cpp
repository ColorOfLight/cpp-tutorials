#include <iostream>
using namespace std;

// true == (true == true)

int main() {
  int salary = 1000000;
  int receipts[] = {13000, 24000, 333800, 123300, 200000};
  bool sales[] = {false, true, true, true, false};
  float sale_percent = 10.0;
  float remain;
  
 remain = salary;
  for(int i = 0; i < 5; i++){
    if(sales[i]){
      remain = remain - receipts[i] * (100 - sale_percent) / 100;
    }
    else{
      remain = remain - receipts[i]; }
      
    }

  cout << remain << endl;
  return 0;
}