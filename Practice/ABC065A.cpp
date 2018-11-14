#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, A, B;
  cin >> X >> A >> B;

  int eat;
  eat = B - A;
  if(eat <= 0){
    cout << "delicious" << endl;
  } else if(eat <= X){
    cout << "safe" << endl;
  } else {
    cout << "dangerous" << endl;
  }
}
