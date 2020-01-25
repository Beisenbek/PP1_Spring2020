#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    bool A = (x % 2 == 0);

    cout << A << endl;

    if (A) cout << "even";
    else cout << "odd";

    return 0;
}