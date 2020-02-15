#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int m = 2 * n - 1;
    int d = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            int d = n - 1 - i;
            if(j >= d && j <= m - 1 - d) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }

    return 0;
}