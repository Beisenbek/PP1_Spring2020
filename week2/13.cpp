#include <iostream>

using namespace std;

int main(){
    int cnt = 0;
    char c1,c2,c3,c4;

    cin >> c1 >> c2 >> c3 >> c4;

    if(c1 == '0') cnt = cnt + 1;
    if(c2 == '0') cnt = cnt + 1;
    if(c3 == '0') cnt = cnt + 1;
    if(c4 == '0') cnt = cnt + 1;

    cout << cnt << endl;

    return 0;
}