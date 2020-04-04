#include <iostream>

using namespace std;

void doit(int x){
    x = x + 1;
    cout << x << endl;
}

int main(){
    
    cout << "partA" << endl;
    int x = 12;
    cout << x << endl;
    cout << &x << endl;

    cout << "partB" << endl;
    doit(x);

    cout << "partC" << endl;
    cout << x << endl;
    

    return 0;
}