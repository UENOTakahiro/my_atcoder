#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  int c, res;
  c = a % b;

  if(c == 0){
    res = 0;
  } else {
    res = b - c;
  }
  cout << res << endl;
}
