#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){

    int a[8];

    fill(a, a + 8, 5);

    for(int i = 0; i < 8; ++i){
        cout << a[i] << " ";
    }
    

    return 0;
}