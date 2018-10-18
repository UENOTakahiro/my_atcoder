#include <bits/stdc++.h>
using namespace std;

int main(){
  int a1, a2, a3, i, count;

  cin >> a1 >> a2 >> a3;
  i = 0;
  if(a1 < a2){
    i = a1;
    a1 = a2;
    a2 = i;
  }
  if(a1 < a3){
    i = a3;
    a3 = a1;
    a1 = i;
  }
  if(a2 < a3){
    i = a3;
    a3 = a2;
    a2 = i;
  }

  count = (a1 - a2) + (a2 - a3);
  cout << count << endl;
}
