#include <bits/stdc++.h>
using namespace std;

int main(){
  string n, res;
  cin >> n;

  for(int i; i<n.size(); i++){
    if(n.at(i) == '1'){
      n.at(i) = '9';
    } else if(n.at(i) == '9'){
      n.at(i) = '1';
    }
  }

  cout << n << endl;
}
