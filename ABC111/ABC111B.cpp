#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int res;
  res = 0;
  if(N <= 111){
    res = 111;
  } else if(N <= 222){
    res = 222;
  } else if(N <= 333){
    res = 333;
  } else if(N <= 444){
    res = 444;
  } else if(N <= 555){
    res = 555;
  } else if(N <= 666){
    res = 666;
  } else if(N <= 777){
    res = 777;
  } else if(N <= 888){
    res = 888;
  } else if(N <= 999){
    res = 999;
  }

  cout << res << endl;
}
