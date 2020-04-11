//Lab1 - Bits

#include <iostream>
#include <vector>

using namespace std;

int myPowerOfTwo(int n){
    int res = 1;
    for(int i = 1; i <= n; ++i){
        res = res * 2;
    }
    return res; 
}

int myPower(int a, int n){
    int res = 1;//a ^ n = 1 * a * a ... a {n}
    for(int i = 1; i <= n; ++i){
        res = res * a;
    }
    return res; 
}

int main(){

    int n;
    cin >> n;
    int m = 0;
    vector<int> v;

    do{
        int bit = n % 2;
        v.push_back(bit);
        n = n / 2;
    }while(n > 0);

    for(int i = 0; i < v.size(); ++i){
        m += v[i] * myPowerOfTwo(v.size() -1 - i);//m = m + ...
    }

    cout << m << endl;

    return 0;
}