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

    int minimum = INT_MAX;

    for(int i = 1; i < n; ++i){
        if(a[i] >= 0 && minimum > a[i]){
            minimum = a[i];
        }
    }

    cout << minimum << endl;

    return 0;
}