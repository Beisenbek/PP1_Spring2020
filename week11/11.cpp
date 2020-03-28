#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void sqr(int x){
    cout <<  x * x << " ";
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(int);

    for_each(a, a + n, sqr);

    return 0;
}