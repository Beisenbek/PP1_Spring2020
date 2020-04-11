//Lab1 - Bits

#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int bit1 = n % 2;
    n = n / 2;
    int bit2 = n % 2;
    n = n / 2;
    int bit3 = n % 2;
    n = n / 2;
    int bit4 = n % 2;

    cout << bit1 <<  " " << bit2 <<  " " << bit3 <<  " " << bit4 <<  " " << endl;

    int m = 8 * bit1  + 4 * bit2 + 2 * bit3 + 1 * bit4;

    cout << m<< endl;

    return 0;
}