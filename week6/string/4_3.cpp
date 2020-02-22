#include <iostream>

using namespace std;

int main(){

    string s = "hello world!";
    string t;
    cin >> t;

    if(s.find(t) != string::npos){
        cout << "found!";
    }else{
        cout << "not found!";
    }
    
    return 0;
}

