#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    for(int i = 10; i >= 0; --i){
        s.insert(i);
    }

    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(11);

    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}