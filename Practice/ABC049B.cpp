#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<string> vec(N);
  for(int i=0;i<N;i++){
    cin >> vec.at(i);
  }

  string res = "Three";
  for(int i=0;i<N;i++){
    if(vec.at(i)=="Y"){
      res = "Four";
    }
  }

  cout << res << endl;
}
