#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool f(string str, int n){
    int cnt = 0;
    for(int i = 0; i < str.size(); ++i){
        /*if(s[i]<='9' && s[i] >='0'){
            cnt++;
        }*/
        if(isdigit(str[i])){
            cnt++;
        }
    }
    return cnt >= n;
}

int main(){

    string str;
    int n;
    cin >> str >> n;
    cout << (f(str, n) ? "YES" : "NO") << endl;

    return 0;
}