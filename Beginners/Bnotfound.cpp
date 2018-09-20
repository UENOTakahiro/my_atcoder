#include <bits/stdc++.h>
using namespace std;

int main(){
  // 宣言、入力
  string S;
  vector<int> vec(26);
  for(int i=0; i<26; i++){
    vec.at(i) = 0;
  }
  cin >> S;

  // 英文を一文字ずつに分けて、a=0, b=1と数字に置き換える
  // 26個の配列に0から入れていく
  // vec.at(0)から順に配列の数字を確認して0のところがあれば最初の存在しないアルファベット
  // ない場合は"None"

  for(int i=0; i<S.size(); i++){
    switch(S.at(i)){
      case 'a':
        vec[0]++;
        break;
      case 'b':
        vec[1]++;
        break;
      case 'c':
        vec[2]++;
        break;
      case 'd':
        vec[3]++;
        break;
      case 'e':
        vec[4]++;
        break;
      case 'f':
        vec[5]++;
        break;
      case 'g':
        vec[6]++;
        break;
      case 'h':
        vec[7]++;
        break;
      case 'i':
        vec[8]++;
        break;
      case 'j':
        vec[9]++;
        break;
      case 'k':
        vec[10]++;
        break;
      case 'l':
        vec[11]++;
        break;
      case 'm':
        vec[12]++;
        break;
      case 'n':
        vec[13]++;
        break;
      case 'o':
        vec[14]++;
        break;
      case 'p':
        vec[15]++;
        break;
      case 'q':
        vec[16]++;
        break;
      case 'r':
        vec[17]++;
        break;
      case 's':
        vec[18]++;
        break;
      case 't':
        vec[19]++;
        break;
      case 'u':
        vec[20]++;
        break;
      case 'v':
        vec[21]++;
        break;
      case 'w':
        vec[22]++;
        break;
      case 'x':
        vec[23]++;
        break;
      case 'y':
        vec[24]++;
        break;
      case 'z':
        vec[25]++;
        break;
    }
  }

  for(int i=0; i<26;i++){
    cout << vec.at(i) << endl;
  }

  // int answer;
  // for(int i=0; i<26; i++){
  //   if(vec.at(i)==0){
  //     answer = i;
  //   } else {
  //     answer = -1;
  //   }
  // }
  //
  // string letter;
  // switch(answer){
  //   case -1:
  //     letter = "None";
  //     break;
  //   case 0:
  //     letter = "a";
  //     break;
  //   case 1:
  //     letter = "b";
  //     break;
  //   case 2:
  //     letter = "c";
  //     break;
  //   case 3:
  //     letter = "d";
  //     break;
  //   case 4:
  //     letter = "e";
  //     break;
  //   case 5:
  //     letter = "f";
  //     break;
  //   case 6:
  //     letter = "g";
  //     break;
  //   case 7:
  //     letter = "h";
  //     break;
  //   case 8:
  //     letter = "i";
  //     break;
  //   case 9:
  //     letter = "j";
  //     break;
  //   case 10:
  //     letter = "k";
  //     break;
  //   case 11:
  //     letter = "l";
  //     break;
  //   case 12:
  //     letter = "m";
  //     break;
  //   case 13:
  //     letter = "n";
  //     break;
  //   case 14:
  //     letter = "o";
  //     break;
  //   case 15:
  //     letter = "p";
  //     break;
  //   case 16:
  //     letter = "q";
  //     break;
  //   case 17:
  //     letter = "r";
  //     break;
  //   case 18:
  //     letter = "s";
  //     break;
  //   case 19:
  //     letter = "t";
  //     break;
  //   case 20:
  //     letter = "u";
  //     break;
  //   case 21:
  //     letter = "v";
  //     break;
  //   case 22:
  //     letter = "w";
  //     break;
  //   case 23:
  //     letter = "x";
  //     break;
  //   case 24:
  //     letter = "y";
  //     break;
  //   case 25:
  //     letter = "z";
  //     break;
  // }
  //
  // cout << letter << endl;
}
