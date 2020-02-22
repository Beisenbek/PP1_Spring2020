#include <iostream>

using namespace std;

int main(){

    string s = "hello world!";
    string t = "hi!";


    bool equal = true;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == t[0]){
            equal = true;
            for(int j = 1; j < t.size(); ++j){
                if(s[i + j] != t[j]){
                    equal = false;
                    break;
                }
            }
        }
    }

    if(equal == true){
        cout << "found!";
    }else{
        cout << "not found!";
    }
    
    return 0;
}

