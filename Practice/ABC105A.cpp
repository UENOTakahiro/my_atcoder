#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;

  int res;
  if(N % K == 0){
    res = 0;
  }else{
    res = 1;
  }
  cout << res << endl;
}
