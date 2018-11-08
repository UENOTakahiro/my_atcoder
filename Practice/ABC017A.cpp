#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[3];
  int b[3];

  for(int i=0; i<3; i++){
    cin >> a[i] >> b[i];
  }

  int res;
  for(int i=0; i<3; i++){
    res += a[i] * 0.1 * b[i];
  }

  cout << res << endl;
}
