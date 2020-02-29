#include <iostream>
#include <cmath>

//library - set of functions

using namespace std;

int a[10000];
int b[10000];
int d[10000];
int n;

void diff(){
    for(int i = 0; i < n; ++i){
        d[i] = abs(a[i] - b[i]);
    }
} 


int main(){

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    diff();

    for(int i = 0; i < n; ++i){
        cout << d[i] << " ";
    }
  

    return 0;
}