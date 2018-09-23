#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;

  int num_x = -1, num_y = -1, num_z = -1;

  for(int x = 0; x <= N; x++){
    for(int y = 0; y + x <= N; y++){
      int z = N - x - y;
      int total = 10000*x + 5000*y + 1000*z;
      if(total == Y){
        num_x = x;
        num_y = y;
        num_z = z;
      }
    }
  }
  cout << num_x << " " << num_y << " " << num_z << endl;
}
