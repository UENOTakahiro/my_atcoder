#include <bits/stdc++.h>
using namespace std;

int main(){
  string N;
  cin >> N;

  int N1, N2, N3, N4;
  N1 = N.at(0);
  N2 = N.at(1);
  N3 = N.at(2);
  N4 = N.at(3);


  string res = "No";
  if(N.at(1) == N.at(2)){
    if(N.at(0) == N.at(1) || N.at(2) == N.at(3)){
      res = "Yes";
    }
  }

  cout << res << endl;
}
