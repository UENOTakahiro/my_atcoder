#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec(N);

  for(int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  int sum, avg;
  sum = 0;
  avg = 0;

  for(int j = 0; j < N; j++) {
    sum += vec.at(j);
  }
  avg = sum / N;

  for(int k = 0; k < N; k++) {
	if(avg > vec.at(k)) {
      cout << avg - vec.at(k) << endl;
    } else {
      cout << vec.at(k) - avg << endl;
    }
  }
}
