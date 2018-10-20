#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;

  int add, sub, mul, res;
  add = A + B;
  sub = A - B;
  mul = A * B;

  if(add > sub){
    res = add;
  } else {
    res = sub;
  }
  if(res < mul){
    res = mul;
  }

  cout << res << endl;
}
