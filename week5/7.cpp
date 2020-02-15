#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int m = 2 * n - 1;
    char a[n][m];
    int d = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = ' ';
        }
    }

    for(int i = n - 1; i >= 0; --i){
        for(int j = 0 + d; j < m - d; ++j){
            a[i][j] = '*';
        }
        d++;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }
    

    return 0;
}