#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin > n;

  vector<int> vec_odd(n/2);
  vector<int> vec_even(n/2);
  for(int i = 0; i<n/2; i++){
    cin >> vec_odd.at(i) >> vec_even.at(i);
  }

  int count = 0;
  int mode_odd, mode_even;

  // vector<int> vec_odd_elements(100000);
  // vector<int> vec_even_elements(100000);
  //
  // for(int i = 1; i<=vec_odd.size(); i++){
  //   vec_odd_elements.at(i) =
  // }

  

    cout << count << endl;
}
