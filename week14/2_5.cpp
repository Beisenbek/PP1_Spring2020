//lab7 - C
#include <iostream>
#include <set>

using namespace std;

int main(){

    int n, t, x;
    cin >> n;
    set<int> s;

    for(int i = 0; i < n; ++i){
        cin >> t;
        s.insert(t);
    }

    cin >> x;

    if(s.find(x) != s.end()){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}