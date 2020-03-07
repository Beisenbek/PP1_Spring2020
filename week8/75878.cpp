#include <iostream>

using namespace std;

string int2bin(int n){
    string res = "";
    while(n > 0){
        if(n % 2 == 1) res = '1' + res;
        else if(n % 2 == 0) res = '0' + res;
        n = n / 2;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << int2bin(n) << endl;
    return 0;
}