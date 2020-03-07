#include <iostream>

using namespace std;

string __int2bin(int n){
  if(n == 0) return "";
  return  __int2bin(n/2) + char(n % 2 + 48);
}

string int2bin(int n){
  if(n == 0) return "0";
  return __int2bin(n);
}


int main(){
    int n;
    cin >> n;
    cout << int2bin(n) << endl;
    return 0;
}