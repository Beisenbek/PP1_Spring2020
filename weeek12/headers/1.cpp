#include <iostream>
#include "lib/mathfunctions.h"

using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    cout << apb(x, y) << endl;
    cout << amb(x, y) << endl;

    return 0;
}