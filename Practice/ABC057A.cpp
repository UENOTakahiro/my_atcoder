#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, Y;
  cin >> X >> Y;

  if(X+Y < 24){
    cout << X + Y << endl;
  } else {
    cout << X + Y -24 << endl;
  }
}
