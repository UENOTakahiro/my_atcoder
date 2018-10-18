#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int res = 0;

  for(int i=0;i<4;i++){
    if(S.at(i) == '+'){
      res++;
    }
    if(S.at(i) == '-'){
      res--;
    }
  }
  cout << res << endl;
}
