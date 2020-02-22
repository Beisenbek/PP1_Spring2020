#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string fname;
    cin >> fname;
    int len = fname.size();
    char name[len];
    fname.copy(name, len, 0);
    name[len] = '\0';

    freopen(name, "r", stdin);

    string str;
    
    cin >> str;

    cout << str << endl;
    

    return 0;
}