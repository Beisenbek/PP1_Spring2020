//lab4 - 17
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    char a[n + 1][2 * n + 1];

    int c = n - 1;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= 2*n; ++j){
            a[i][j] = ' ';
        }
    }

    for(int r = 1; r <= n; ++r){
        for(int k = 1; k <= 2 * r - 1; ++k){
            a[r][c + k] = '*';
        }
        c--;
    }

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j < 2*n; ++j){
           cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}