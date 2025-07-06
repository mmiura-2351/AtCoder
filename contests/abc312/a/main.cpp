#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  list<string> ANS_LIST = {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
  for(string i: ANS_LIST){
    if(s == i){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}