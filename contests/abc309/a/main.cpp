#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  bool answer=false;
  if(a==1&&b==2) answer=true;
  if(a==2&&b==3) answer=true;
  if(a==4&&b==5) answer=true;
  if(a==5&&b==6) answer=true;
  if(a==7&&b==8) answer=true;
  if(a==8&&b==9) answer=true;
  if (answer) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
