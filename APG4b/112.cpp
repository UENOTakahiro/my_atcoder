#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int answer, num_plus, num_minus;
  num_plus = 0;
  num_minus = 0;

  for(int i = 0; i < S.size(); i++) {
    if(S.at(i) == '1'){
      continue;
    }
    if(S.at(i) == '+') {
      num_plus += 1;
    }
    if(S.at(i) == '-') {
      num_minus += 1;
    }
  }
  answer = 1 + num_plus - num_minus;

  cout << answer << endl;

}
