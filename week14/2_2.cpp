//lab7 - C
#include <iostream>

using namespace std;

int a[10000001];

int main(){

    int n;
    cin >> n;


    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;


    int l = 0, r = n - 1;

    while( l < r){
        int m = (l + r ) / 2;
        if(x > a[m]){
            l = m + 1;
        }else{
            r = m;
        }
    }

    if(a[l] == x){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}