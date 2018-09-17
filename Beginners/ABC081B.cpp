#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, count;
  cin >> N;
  count = 0;

  vector<int> vec(N);

  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }

  while(true) {
    bool flag = false;
    for(int i = 0; i < N; i++){
      if(vec.at(i) % 2 != 0) {
        flag = true;
      }
    }
    if(flag == true) break;

    for(int i = 0; i < N; i++){
      vec.at(i) = vec.at(i) / 2;
    }
    count++;
  }
  cout << count << endl;
}
