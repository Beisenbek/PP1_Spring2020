//lab9 - 1
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x[n], y[n];

    for(int i = 0; i < n; ++i){
        cin >> x[i] >> y[i];
    }


    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(x[i] > x[j]){
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }else if(x[i] == x[j] && y[i] > y[j]){
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }


    for(int i = 0; i < n; ++i){
       cout << x[i] << " " << y[i] << endl;
    }


    return 0;
}