#include <iostream>

using namespace std;

int main(){

    string s = "hello world!";
    string q = s.insert(5, 10, '!');
    cout << q << endl;
    
    return 0;
}

