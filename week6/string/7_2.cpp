#include <iostream>

using namespace std;

int main(){

    string s = "hello world!";
    s.insert(5, 10, '!');
    cout << s << endl;
    
    return 0;
}

