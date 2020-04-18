//lab7 - C
#include <iostream>

using namespace std;

int a[10000001];

bool f(int l, int r, int x){
    if(l >= r) return (a[l] == x);
    int m = (l + r) / 2;
    if(x > a[m]) return f(m + 1, r, x);
    return f(l, m, x);
}

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;

    if(f(0, n - 1, x)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}