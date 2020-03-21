#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st;

    for(int i = 10; i >= 1; --i){
        st.push(i);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}