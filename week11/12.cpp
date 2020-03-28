#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int f(){
    return 2;
}

int main(){
    
    int a[8];

    generate(a, a + 8, f);

    for(int i = 0; i < 8; ++i){
        cout << a[i] << endl;
    }

    return 0;
}