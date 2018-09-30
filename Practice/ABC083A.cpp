#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int L, R;
  L = A + B;
  R = C + D;

  string res;
  if(L > R){
    res = "Left";
  } else if(R > L){
    res = "Right";
  } else {
    res = "Balanced";
  }

  cout << res << endl;
}
