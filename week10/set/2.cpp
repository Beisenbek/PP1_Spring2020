#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    for(int i = 10; i >= 1; --i){
        s.insert(i);
    }

    set<int> :: iterator it = s.begin();
    it++;

    for(;it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}