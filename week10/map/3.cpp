#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;
    string str;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> str;
        m.insert(make_pair(str, str.size()));
    }

    string test;
    cin >> test;
    cout << m[test] << endl;

    return 0;
}