#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    for(int i = 1; i <= 10; ++i){
        s.insert(i);
    }

    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    cout << endl;
    cout << "REVERSED_ORDER" << endl;
 
    set<int> :: reverse_iterator rit;

    for(rit = s.rbegin(); rit != s.rend(); ++rit){
        cout << *rit << " ";
    }

    return 0;
}