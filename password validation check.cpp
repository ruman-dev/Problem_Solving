#include<bits/stdc++.h>
using namespace std;
int main()
{
  string pass;
  
  int flag=0, sp=0, digit=0;
  getline(cin, pass);
  
  int passLen = pass.length();
  if(passLen >= 8){
    for(int i=0; i<passLen; i++){
      if((pass[i]>=33 && pass[i]<=47) || 
      (pass[i]>=58 && pass[i]<=64) || 
      (pass[i]>= 92 && pass[i]<=96) ||
      (pass[i]>= 123 && pass[i]<=127)){
        sp++;
      }
      else if(pass[i]>= 48 && pass[i]<=57){
        digit++;
      }
    }
    if(sp>=1 && digit>=2){
      cout << "Your Password is Valid" << endl;
    }
    else{
      cout << "Your Password is Invalid!" << endl;
    }
  }
  else{
    cout << "Try Again! Password should be 8 characters" << endl;
    return 0;
  }
}