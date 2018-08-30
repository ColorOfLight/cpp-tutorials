/* 
 *    숙제 4 - 통장의 잔고 바꾸기
 *    
 *    드디어 지현이가 기다리던 월급날이 되었다. 그런데 돈이 입금이 되지 않아 확인을 해보니
 *    담당자가 컴맹이라 어떻게 입금을 할 줄 몰라 입금을 못했다고 한다...
 *    그래서 똑똑하고 프로그래밍도 잘하는 지현이가 담당자한테서 권한을 뺏어서
 *    직접 자기 통장으로 입금을 하기로 했다.
 * 
 *    두 통장을 받아서 한 통장에서는 입력받은 돈을 빼고, 다른 통장에는 돈을 더하는 함수를 완성하시오!
 *    
 */

#include <iostream>
#include <stdio.h>
using namespace std;

void withdraw_money(int *in_account, int *out_account, int amount) {
  // TODO: 함수 완성하기
}

int main() {
  int jihyun_account = 1000000;
  int company_account = 20000000;

  printf("Before withdrawal: jihyun - %d, company - %d\n", jihyun_account, company_account);
  // TODO: withdraw_money를 이용해 지현이의 통장에 입급하고 회사 통장에서 출금하기!

  printf("After withdrawal: jihyun - %d, company - %d\n", jihyun_account, company_account);

  return 0;
}