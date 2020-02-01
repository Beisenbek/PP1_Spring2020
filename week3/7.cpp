#include <iostream>

using namespace std;

int main(){

    int cnt2 = 0;
    int n;
    cin >> n;

    int a[n];

    for(int j = 2; cnt2 < n; ++j){
        int cnt = 0;
        for(int i = 1; i <= j; ++i){
            if(j % i == 0) cnt++;
        }
        if(cnt == 2){
            a[cnt2] = j;
            cnt2++;
        }
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}