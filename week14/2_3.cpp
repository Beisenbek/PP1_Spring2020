//lab7 - C
#include <iostream>

using namespace std;

int main(){

    int n, x;
    cin >> n >> x;

    freopen("big_test.txt","w", stdout);

    cout << n << endl;
    for(int i = 1; i <= n; ++i){
        cout << i << " ";
    }
    cout << endl << x << endl;

    return 0;
}