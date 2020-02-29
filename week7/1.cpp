#include <iostream>

using namespace std;

//header, signature function -  T1 name_func(T2 a, T3 b, ...)
int apb(int x,int y){
    int c = x + y;
    return c;    
} 

int apb2(int x, int y){
    return x + y;    
} 

int main(){
    int a, b;
    cin >> a >> b;
    int z = apb(a, b);
    cout << z << endl;
    cout << apb2(a, b) << endl;

    return 0;
}