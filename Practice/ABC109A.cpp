#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;

  int C = 0;
  string res = "No";

  if((A * B * 1)%2 == 1){
    res = "Yes";
  } else if((A * B * 2)%2 == 1){
    res = "Yes";
  } else if((A * B * 3)%2 == 1){
    res = "Yes";
  }

  cout << res << endl;

}
