#include <iostream>

using namespace std;

void doit(int * t){
    cout << "partD" << endl;
    *t = *t + 1;
    cout << *t << endl;
}

int main(){
    
    cout << "partA" << endl;
    int x = 12;
    cout << x << endl;
    cout << &x << endl;

    cout << "partB" << endl;
    doit(&x);

    cout << "partC" << endl;
    cout << x << endl;
    

    return 0;
}