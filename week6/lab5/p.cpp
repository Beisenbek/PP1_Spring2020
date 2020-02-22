#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'z') cout << 'a';
        else cout << char(s[i] + 1);
    }


    return 0;
}