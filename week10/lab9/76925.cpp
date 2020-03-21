#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, int> m;

    int n, x, t;
    cin >> n >> t;

    for(int i = 0; i < n; ++i){
        cin >> x;
        m[x] = m[x] + 1;
    }

    cout << m[t] << endl;

    return 0;
}