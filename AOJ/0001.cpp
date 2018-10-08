#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(10);

  for(int i=0;i<10;i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(),vec.end());
  reverse(vec.begin(),vec.end());

  for(int i=0;i<3;i++){
    cout << vec.at(i) << endl;
  }
}
