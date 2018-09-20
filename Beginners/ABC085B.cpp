#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数宣言, 入力
  int N;
  cin >> N;

  vector<int> vec(N);

  for(int i=0; i<N; i++){
    cin >> vec.at(i);
  }

  // 配列を降順に並べ替え
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());

  // 最初の値と次の値を順に比較していき値が小さい時のみ段数をプラスする
  // 最小値を更新する
  int count, min;
  count = 0;
  for(int i=0; i < N; i++){
    if(i==0){
      min = vec.at(i);
      count++;
    }
    if(min > vec.at(i)){
      count++;
      min = vec.at(i);
    }
  }

  // 段数を出力する
  cout << count << endl;
}
