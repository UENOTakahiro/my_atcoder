#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int N, Y;
  cin >> N >> Y;

  // 回答
  int num_x, num_y, num_z;

  for(int x = 0; x <= N; x++){
    for(int y = 0; y <= N; y++){
      for(int z = 0; z <= N; z++){
        int total = 10000*x + 5000*y + 1000*z;
        if(x + y + z == N && total == Y){
          num_x = x;
          num_y = y;
          num_z = z;
        } else {
          num_x = -1;
          num_y = -1;
          num_z = -1;
        }
      }
    }
  }

  cout << num_x << " " << num_y << " " << num_z << endl;
}
