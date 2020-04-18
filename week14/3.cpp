//lab6 - C
#include <iostream>

using namespace std;



int main(){

    int n;
    cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        bool exists = false;
        for(int j = 0; j < i; ++j){
            if(a[i] == a[j]){
                exists = true;
            }
        }
        if(!exists){
            for(int j = 0; j < n; ++j){
                if(a[i] == b[j]){
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}