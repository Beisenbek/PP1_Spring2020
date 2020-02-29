#include <iostream>
#include <cmath>


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
    printf("%.2f", c);

    return 0;
}