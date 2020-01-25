#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int cnt = 0;

    while(n >= 0){
        cout << n << endl;
        cnt = cnt + 1;
        n = n / 10;
        if(n == 0) break;
    }

    cout << cnt << endl;

    return 0;
}