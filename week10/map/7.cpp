#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m.insert(make_pair("hello", 5));
    cout << m["hello"] << endl;

    m.insert(make_pair("hello", 6));
    cout << m["hello"] << endl;

    return 0;
}

