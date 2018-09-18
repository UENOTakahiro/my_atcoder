#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  // 入力
  cin >> N;

  vector<int> vec(N);
  int sum_a, sum_b;
  sum_a = 0;
  sum_b = 0;
  int diff = 0;

  // 入力
  for(int i=0; i<N; i++){
    cin >> vec.at(i);
  }

  // 配列を降順にソート
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());

  // 配列の最初からAlice, Bobの順に数字を振って合計していく
  for(int i=0; i<N; i ++){
    if(i%2 == 0){
      sum_a += vec.at(i);
    } else {
      sum_b += vec.at(i);
    }
  }
  // 合計の差を出力
  diff = sum_a - sum_b;

  // 出力
  cout << diff << endl;

}
