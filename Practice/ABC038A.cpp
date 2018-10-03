#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;

  string res = "NO";
  if(S.at(S.size()-1) == 'T'){
    res = "YES";
  }
  cout << res << endl;
}
