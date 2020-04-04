#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool isEven(int v){
    if(v % 2 == 0) return true;
    return false;
}


int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14};
    int n = sizeof(a) / sizeof(int);
    int res = count_if(a, a + n, isEven);

    cout << res << endl;


    return 0;
}