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
    int second_max_value = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(max_value < a[i][j]){
                second_max_value = max_value;
                max_value = a[i][j];
            }
            else if(max_value > a[i][j] && second_max_value < a[i][j]){
                second_max_value = a[i][j];
            }
        }
    }

    cout << second_max_value << endl;

    return 0;
}