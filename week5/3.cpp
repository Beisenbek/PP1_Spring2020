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

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(max_value < a[i][j]){
                max_value = a[i][j];
            }
        }
    }

    cout << max_value << endl;

    return 0;
}