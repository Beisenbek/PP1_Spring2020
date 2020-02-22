#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    printf("The next number for the number %d is %d.\n", x, x + 1);
    printf("The previous number for the number %d is %d.\n", x, x - 1);

    return 0;
}