#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int sum, res;
  for(int i=1;i <= N; i++){
    sum += i * 10000;
  }
  res = sum / N;

  cout << res << endl;
}
