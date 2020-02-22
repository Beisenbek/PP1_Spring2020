#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;
    ss << "test" << endl << "ok";

    string t;

    ss >> t;
    //cout << t << endl;
    string x;
    ss >> x;
    cout << x << endl;
    cout <<t << endl;
    return 0;
}