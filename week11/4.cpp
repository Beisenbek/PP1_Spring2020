#include <iostream>
#include <algorithm>

using namespace std;

void print_array(int * a, int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    int a[] = {3, 2, 1};

    int n = sizeof(a) / sizeof(int);

    while(next_permutation(a, a + n)){
        print_array(a, n);
    }

    return 0;
}