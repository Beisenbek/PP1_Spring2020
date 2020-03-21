#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m.insert(make_pair("ok", 2));

    cout << m["ok"] << endl;

    return 0;
}