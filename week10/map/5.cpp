#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, int> m;

    for(int i = 0; i < 10; ++i){
        m[i] = i * i;
    }

    for(int i = 0; i < 10; ++i){
        cout << i << " " << m[i] << endl;
    }

    map<int, int> :: iterator it;

    for(it  = m.begin(); it != m.end(); ++it){
        pair<int, int> p =  *it;
        cout << p.second << endl;
    }

    return 0;
}

/*
int a[1000];
[0, 1, 2, 3, 4, 5, ...]
a[0] = 1;
a[10] = 2;


map<int, int> m;
m[0] = 1;
m[10] = 2;*/

