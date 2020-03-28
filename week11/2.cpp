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

void print_array(int * a, int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(a) / sizeof(int);

    int m = factorial(n);

    for(int j = 1; j <= m; ++j){
        print_array(a, n);
        next_permutation(a, a + n);
    }


    return 0;
}