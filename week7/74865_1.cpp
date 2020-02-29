#include <iostream>
#include <cmath>

//library - set of functions

using namespace std;

int a[10000];
int b[10000];
int n;

bool appeared(int i){
    bool res = false;
    for(int j = i - 1; j >= 0; --j){
        if(a[j] == a[i]){
            res = true;
            break;
        }
    }
    return res;
}

int counter(int x){
    int res = 0;
    for(int i = 0; i < n; ++i){
        if(b[i] == x){
            res++;
        }
    }
    return res;
}

int solution(){
    int res = 0;
    for(int i = 0; i < n; ++i){
        if(!appeared(i)){
            res += counter(a[i]);
        }
    }
    return res;
}

int main(){

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    cout << solution() << endl;

    return 0;
}