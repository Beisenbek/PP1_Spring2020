#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q;

    for(int i = 10; i >= 1; --i){
        q.push(i);
    }

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}