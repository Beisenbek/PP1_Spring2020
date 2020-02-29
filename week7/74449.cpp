#include <iostream>
#include <cmath>

//library - set of functions

using namespace std;

int a[10000];
int n;
int x;


string appeared(int x){
    string res = "No";
    for(int i = 0; i < n; ++i){
        if(a[i] == x){
            res = "Yes";
            break;
        }
    }
    return res;
}

void readData(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> x;
}

int main(){

    readData();
    cout << appeared(x);

    return 0;
}