#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int cnt = 0;

    do{
        cout << n << endl;
        cnt = cnt + 1;
        n = n / 10;
    }while(n > 0);

    cout << cnt << endl;

    return 0;
}