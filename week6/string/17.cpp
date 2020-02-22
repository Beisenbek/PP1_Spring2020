#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    char fname[] = {'i', 'n', 'p', 'u', 't', '2', '.', 't', 'x', 't', '\0'};

    freopen(fname, "r", stdin);

    string str;
    
    cin >> str;

    cout << str << endl;
    

    return 0;
}