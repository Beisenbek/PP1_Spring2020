#include <iostream>
#include <algorithm>

using namespace std;

int factorial(int n){
    int m = 1;
    for(int i = 1; i <=n; ++i){
        m = m * i;
    }
    return m;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6};

    //12 
    //4
    //12 / 4 = 3

    int n = sizeof(a) / sizeof(int);

    int m = factorial(n);

    for(int j = 1; j <= m; ++j){
        for(int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;   
        next_permutation(a, a + n);
    }

    /*
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;

    next_permutation(a, a + n);
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;


    next_permutation(a, a + n);
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;*/


    return 0;
}