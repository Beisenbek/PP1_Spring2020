#include <iostream>

using namespace std;

int main(){

    int a[100];

    for(int i = 0; i < 100; ++i){
        a[i] = i;
    }

    for(int i = 0; i < 100; ++i){
        cout << a[i] << " ";
    }

    return 0;
}