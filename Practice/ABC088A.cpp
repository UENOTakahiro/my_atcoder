#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A;
  cin >> N >> A;

  int rest;
  rest = N % 500;

  string res = "No";
  if(rest <= A){
    res = "Yes";
  }

  cout << res << endl;
}
