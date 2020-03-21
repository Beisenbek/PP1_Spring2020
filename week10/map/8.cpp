#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m["banana"] = 6;
    m["apple"] = 5;

    map<string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << endl <<  "REVERSED_ORDER" << endl;

    map<string, int> :: reverse_iterator rit;
    for(rit = m.rbegin(); rit != m.rend(); ++rit){
        cout << (*rit).first << " " << (*rit).second << endl;
    }

    return 0;
}