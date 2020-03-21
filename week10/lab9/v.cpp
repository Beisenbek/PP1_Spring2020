#include <iostream>
#include <vector>

using namespace std;

void f2(vector<int> * v){
    for(int i = 0; i < v->size(); ++i){
        cout << v->at(i) << " ";
    }
    v->push_back(10);
}


void f(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        cout << v.at(i) << " ";
    }
    v.push_back(10);
}

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);

    f(v);
    cout << endl;
    f2(&v2);

    cout << "sizes:" << endl;
    cout << v.size() << endl;//2
    cout << v2.size() << endl;//3


    return 0;
}