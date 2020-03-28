#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){

    vector<int> myvector;

    fill(myvector.begin(), myvector.end(), 5);

    vector<int> :: iterator it;
    for(it = myvector.begin(); it != myvector.end(); ++it){
        cout << *it << " ";
    }
    

    return 0;
}