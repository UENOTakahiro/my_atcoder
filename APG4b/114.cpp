#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int max_num, min_num;
  max_num = max(A, B);
  max_num = max(max_num, C);

  min_num = min(A, B);
  min_num = min(min_num, C);


  cout << max_num - min_num << endl;
}
