#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    string t1 = s.substr(0,s.size() - 1);
    string t2 = s.substr(1);

    cout << t1 << endl;
    cout << t2 << endl;

    bool f1 = true;
    bool f2 = true;

    for(int i = 0; i <= t1.size()/2; ++i){
        if(t1[i] != t1[t1.size() - 1 - i]){
            f1 = false;
            break;
        }
    }

    for(int i = 0; i <= t2.size()/2; ++i){
        if(t2[i] != t2[t2.size() - 1 - i]){
            f2 = false;
            break;
        }
    }

    if(f1 or f2) cout << "YES";
    else cout << "NO";


    return 0;
}