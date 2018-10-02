#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<long long> vec(87);

  vec.at(0) = 2;
  vec.at(1) = 1;

  for(int i = 2;i <= 86; i++){
    vec.at(i) = vec.at(i-1) + vec.at(i-2);
  }

  long long res = vec.at(N);

  // for(int i = 0; i <=86; i++){
  //   cout << vec.at(i) << endl;
  // }
  cout << res << endl;
}
