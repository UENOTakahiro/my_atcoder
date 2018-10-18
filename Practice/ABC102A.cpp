#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int res;
  if(N % 2 == 0){
    res = N;
  } else if(N % 2 == 1){
    res = 2 * N;
  }
  cout << res << endl;
}
