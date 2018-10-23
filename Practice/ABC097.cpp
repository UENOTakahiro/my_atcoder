#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  int e = 0;
  int f;

  f = abs(c-a);
  // a < b < cにソート
  if(a > b){
    e = a;
    a = b;
    b = e;
  }
  if(b > c){
    e = b;
    b = c;
    c = e;
  }
  if(a > b){
    e = a;
    a = b;
    b = e;
  }

  if((b-a <= d && c-b <= d) || f <= d){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
