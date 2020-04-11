//Lab1 - Bits
#include <iostream>
#include <vector>
#include "myMath.h"

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v = getBits(n);
    reverse(v.begin(), v.end());
    int m = getNumberFromBits(v);

    cout << m << endl;

    return 0;
}