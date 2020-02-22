#include <iostream>

using namespace std;

int main(){

    string s = "hello world!";
    string t = "123123123";

    string q = s.insert(5, t);

    cout << q << endl;
    
    return 0;
}

