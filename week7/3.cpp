#include <iostream>

using namespace std;

int sum(int n){
    int res = 0;
    for(int i = 1; i <= n; ++i){
        res += i;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}