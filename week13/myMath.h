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

vector<int> getBits(int n){
    vector<int> v;
    do{
        v.push_back(n % 2);
        n = n / 2;
    }while(n > 0);
    return v;
}

int getNumberFromBits(vector<int> v){
    int res = 0;
    for(int i = 0; i < v.size(); ++i){
        res += v[i] * myPowerOfTwo(i);
    }
    return res;
}