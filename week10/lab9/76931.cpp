#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, int> m;

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        m[x] = m[x] + 1;
    }

    map<int, int> :: iterator it;
    int cnt = 0;

    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second >= 2){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}