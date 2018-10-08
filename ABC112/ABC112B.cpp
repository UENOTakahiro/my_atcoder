#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, T;
  cin >> N >> T;

  vector<int> vec_c(N);
  vector<int> vec_t(N);

  for(int i=0;i<N; i++){
    cin >> vec_c.at(i) >> vec_t.at(i);
  }

  int min = 100000;
  int cost = 100000;
  for(int i=0;i<N;i++){
    if(cost > vec_c.at(i) && T >= vec_t.at(i)){
      cost = vec_c.at(i);
      min = vec_t.at(i);
    }
  }

  if(T<min){
    cout << "TLE" << endl;
  } else {
    cout << cost << endl;
  }
}
