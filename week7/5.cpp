#include <iostream>
#include <cmath>

//library - set of functions

using namespace std;

double f(int n);
int sum(int n);

double f(int n){
    int s = sum(n);
    return sqrt(s);
}

int sum(int n){
    int res = 0;
    for(int i = 1; i <= n; ++i){
        res += i;
    }
    return res;
}

int main(){
  
    int n;

    cin >> n;
    cout << f(n) << endl;

    return 0;
}