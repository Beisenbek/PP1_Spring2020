#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string str;
    getline(cin, str);
    
    int cnt = 1;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == ' '){
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}