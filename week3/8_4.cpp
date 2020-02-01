#include <iostream>
using namespace std;

int main(){

    int n, x;
    cin >> n;
    int m = INT_MIN;
    
    for(int i = 0; i < n; ++i){
        cin >> x;
        m = max(m, x);
    }
    cout << m << endl;

    return 0;
}