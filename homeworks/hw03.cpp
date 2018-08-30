/* 
 *    숙제 3 - 최고의 식당 찾기
 *    성호는 이번 주말에 지현이와 갈 식당을 정하기 위해 맛집들을 찾아 리스트를 만들었다.
 *    이 중에서 가장 평점이 높은 곳을 가고 싶지만, 성호와 지현이는 개강한 대학생이기 때문에
 *    주 메뉴가 15,000원이 넘는 식당은 가지 않기로 했다.
 *    
 *    이때 주어진 식당과 가격 리스트를 받아 가장 갈만한 식당의 번호(index)를 뽑는 함수를 완성하시오!
 *    
 */

#include <iostream>
using namespace std;

int select_best_store(double score[], int price[], int max_len) {
  // TODO: 함수 완성하기!
  return 0;
}

int main() {
  // Main 함수는 건들지 말기!
  int STORE_LEN = 10;
  double store_score[] = { 2.4, 3.5, 4.8, 4.9, 3.7, 2.9, 2.2, 3.9, 4.2, 5.0 };
  int store_price[] = { 9000, 12000, 15600, 20000, 14800, 20000, 4000, 14000, 15000, 40000 };
  int best_store_idx;

  best_store_idx = select_best_store(store_score, store_price, STORE_LEN);
  cout << "BEST store is " << best_store_idx + 1 << endl;

  return 0;
}