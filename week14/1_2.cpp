//lab9 - 1
#include <iostream>

using namespace std;

int main(){

    int n, x, y;
    cin >> n;
    pair<int, int> p[n];

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        p[i] = make_pair(x, y);
    }


    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(p[i].first > p[j].first){
                swap(p[i], p[j]);
            }else if(p[i].first == p[j].first && p[i].second > p[j].second){
                swap(p[i], p[j]);
            }
        }
    }

    for(int i = 0; i < n; ++i){
       cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}