#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  int res;

  if(a%2 == 1 && b%2 == 0){
    res = (a + b) / 2 + 1;
  } else if(a%2 == 0 && b%2 == 1) {
    res = (a + b) / 2 + 1;
  } else {
    res = (a + b) /2;
  }

  cout << res << endl;
}
