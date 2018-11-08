#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;

  int ar, br, cr;

  if(A < B && A < C){
    ar = 3;
    if (B < C){
      cr = 1;
      br = 2;
    } else {
      br = 1;
      cr = 2;
    }
  }

  if(B < A && B < C){
    br = 3;
    if (A < C){
      cr = 1;
      ar = 2;
    } else {
      ar = 1;
      cr = 2;
    }
  }

  if(C < A && C < B){
    cr = 3;
    if(A < B){
      br = 1;
      ar = 2;
    } else {
      ar = 1;
      br = 2;
    }
  }

  cout << ar << endl << br << endl << cr <<endl;
}
