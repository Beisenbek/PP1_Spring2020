#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = (n / 100) % 10;
    int d4 = n / 1000;

    if(d1 == 0 && d2 == 0 && d3 == 0) cout << 3 << endl;
    else if((d1 == 0 && d2 == 0 && d3 != 0) ||
            (d1 == 0 && d3 == 0 && d2 != 0) || 
            (d2 == 0 && d3 == 0 && d1 != 0)) cout << 2 << endl;
    else if((d1 == 0 && d2 != 0 && d3 != 0) ||
            (d2 == 0 && d1 != 0 && d3 != 0) || 
            (d3 == 0 && d1 != 0 && d2 != 0)) cout << 1 << endl;
    else cout << "0" << endl;
     
    return 0;
}