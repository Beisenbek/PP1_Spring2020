#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int pos = 0;
    int m = a[0];

    for(int i = 1; i < n; ++i){
        if(m < a[i]){
            m = a[i];
            pos = i;
        }
    }

    cout << pos + 1 << endl;

    return 0;
}