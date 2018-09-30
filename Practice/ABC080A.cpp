#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;

  int plan_a, plan_b;

  plan_a = A * N;
  plan_b = B;

  if(plan_a > plan_b){
    cout << plan_b << endl;
  } else {
    cout << plan_a << endl;
  }
}
