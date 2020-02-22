#include <iostream>

using namespace std;

int main(){

    string s = "hello world!";

    string t = s.substr(0, 2);
    string t2 = s.substr(1);

    cout << t << endl;
    cout << t2 << endl;

    return 0;
}