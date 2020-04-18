//lab7 - C
#include <iostream>

using namespace std;


int a[10000001];

int main(){

    int n;
    cin >> n;


    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;

    bool res = false;

    for(int i = 0; i < n; ++i){
        if(a[i] == x){
            res = true;
            break;
        }
    }

    if(res == true){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}