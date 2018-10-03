#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;

  int point = 1;
  for(int i=0;i<N;i++){
    if(2 * point > point + K){
      point += K;
    } else {
      point *= 2;
    }
  }

  cout << point << endl;
}
