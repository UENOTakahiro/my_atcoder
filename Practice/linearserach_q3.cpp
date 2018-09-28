#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec.at(i);
  }

  int res = 10000001;
  for(int i=0; i<n;i++){
    if(vec.at(i) < res){
      res = vec.at(i);
    }
  }

  cout << "答え:" << res << endl;
}
