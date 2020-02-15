#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int max_value = a[0][0];
    int max_row = 0;
    int max_col = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(max_value < a[i][j]){
                max_value = a[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    cout << max_value << endl;
    cout << max_row + 1 << " " << max_col + 1 << endl;

    return 0;
}