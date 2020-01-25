#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    bool A = (x % 2 == 0);
    bool B = (x % 3 == 0);
    if(A and B) cout << "ok";
    else cout << "no";
    return 0;
}