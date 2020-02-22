#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string str = "test";
    int n = str.size();

    char buffer[n];

    str.copy(buffer,n,0);
    buffer[n] = '\0';

    cout << buffer << endl;


    return 0;
}