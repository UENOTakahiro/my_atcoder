#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> vec_l(N);
  vector<int> vec_r(N);
  for(int i=0;i<N;i++){
    cin >> vec_l.at(i) >> vec_r.at(i);
  }

  int count = 0;
  for(int i=0;i<N;i++){
    count += vec_r.at(i) - vec_l.at(i) + 1;
  }

  cout << count << endl;
}
