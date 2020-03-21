#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m["ok"] = 12;

    cout << m["ok"] << endl;

    return 0;
}