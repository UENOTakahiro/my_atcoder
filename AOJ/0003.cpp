#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;

  cin >> N;
  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(N);

  for(int i=0;i<N;i++){
    cin >> a.at(i) >> b.at(i) >> c.at(i);
  }

  for(int i=0;i<N;i++){
    int aa, bb, cc;

    aa = a.at(i) * a.at(i);
    bb = b.at(i) * b.at(i);
    cc = c.at(i) * c.at(i);

    // cout << aa << endl;
    // cout << bb << endl;
    // cout << cc  << endl;

    if(aa == bb + cc || bb == aa + cc || cc == aa + bb){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
