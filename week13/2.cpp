//Lab9 - J

#include <iostream>
#include <map>

using namespace std;

int main(){

    int n, k;
    string s;
    cin >> n;
    map<string, int> m;

    for(int i = 0; i < n; ++i){
        cin >> s >> k;
        m[s] += k;
    }

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}