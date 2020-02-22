#include <iostream>

using namespace std;

int main(){

    string s = "hello world!";
    string t;
    cin >> t;

    int n = s.size();
    int m = t.size();

    bool found = false;

    for(int i = 0; i < n - m; ++i){
        if(t == s.substr(i, m)){
            found = true;
            break;
        }
    }

    if(found == true){
        cout << "found!";
    }else{
        cout << "not found!";
    }
    
    return 0;
}

