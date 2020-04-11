//Lab1 - Bits

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

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
        m += v[i] * pow(2, v.size() -1 - i);//m = m + ...
    }

    cout << m << endl;

    return 0;
}