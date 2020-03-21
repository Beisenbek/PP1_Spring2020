#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m["hello"] = 5;
    cout << m["hello"] << " ";
    m["hello"] = 7;
    cout << m["hello"] << " ";
 
    return 0;
}

