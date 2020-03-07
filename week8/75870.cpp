#include <iostream>

using namespace std;

int f(int d, int v, int n){
    if(d == n) return v;
    return f(d + 1, v * 2, n);
}

int f2(int n){
    if(n == 0) return 1;
    return f2(n - 1) * 2;
}

int main(){
    
    int n;
    cin >> n;
    cout << f(0, 1, n) << endl;
    cout << f2(n) << endl;
    return 0;
}