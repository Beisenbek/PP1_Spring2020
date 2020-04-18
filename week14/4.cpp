//lab13 - K
#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

bool is_it_perfect_sqr(char c1, char c2){
    int x = int(c1 - '0') * 10 + int(c2 - '0');
    int t = sqrt(x);
    return t * t == x;
}

int main(){

    string s;
    cin >> s;
    
    stack<char> st;

    for(int i = 0; i < s.size(); ++i){
        char current = s[i];
        if(!st.empty()){
            char top = st.top();
            if(is_it_perfect_sqr(top, current)){
                st.pop();
            }else{
                st.push(current);
            }
        }else{
            st.push(current);
        }
    }

    if(st.empty()){
        cout << "Stack is empty" << endl;
    }else{
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }

    return 0;
}