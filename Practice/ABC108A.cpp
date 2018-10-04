#include <bits/stdc++.h>
using namespace std;

int main(){
  int K;
  cin >> K;

  int oven, odd;
  if(K%2 == 0){
    oven = K/2;
    odd = K/2;
  } else if(K%2 == 1){
    oven = K/2;
    odd = K/2 + 1;
  }

  int res = oven * odd;
  cout << res << endl;
}
