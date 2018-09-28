#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec.at(i);
  }

  string rec = "No";
  for(int i=0; i<n;i++){
    if(vec.at(i) == 0){
      rec = "Yes";
    }
  }

  cout << rec << endl;
}
