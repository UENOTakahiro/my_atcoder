#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  string op;
  cin >> A >> op >> B;

  int res;
  if(op == "+"){
    res = A + B;
  } else if(op == "-"){
    res = A - B;
  }
  cout << res << endl;
}
