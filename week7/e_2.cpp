#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(int a, int b){
    double c = sqrt(a * a + b * b);
    return c;
}

int main(){
    int a, b;
    cin >> a >> b;
    double c = f(a, b);

    cout << c << endl;
    cout << setprecision(4) << c << endl;
    cout << c << endl;


    return 0;
}