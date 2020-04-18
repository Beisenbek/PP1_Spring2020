//lab7 - C
#include <iostream>
#include <vector>

using namespace std;

bool f(int x, vector<int> :: iterator it, vector<int> :: iterator end_it){
    if(it == end_it) return false;
    if(*it == x) return true;
    return f(x, ++it, end_it);
}

int main(){

    vector<int> v;
    int n, t, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> t;
        v.push_back(t);
    }

    cin >> x;

    if(f(x, v.begin(), v.end()) == true){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}