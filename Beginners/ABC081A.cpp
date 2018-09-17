#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b, c;
  int count;
  cin >> a >> b >> c;
  count = 0;
  if(a == '1') {
    count ++;
  }
  if(b == '1') {
    count ++;
  }
  if(c == '1') {
    count ++;
  }
  cout << count << endl;
}
