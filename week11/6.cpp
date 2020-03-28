#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){

    int myints[] = {1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 3, 3, 3, 3}; 
    int n = sizeof(myints) / sizeof(int);
    vector<int> myvector (myints, myints + n);

    vector<int> :: iterator res = unique(myvector.begin(), myvector.end());
    myvector.resize(distance(myvector.begin(), res)); 

    vector<int> :: iterator it;
    for(it = myvector.begin(); it != myvector.end(); ++it){
        cout << *it << " ";
    }
    

    return 0;
}