#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string s = "test";
    stringstream ss;
    ss << s << endl << s;

    cout << ss.str() << endl;


    return 0;
}

