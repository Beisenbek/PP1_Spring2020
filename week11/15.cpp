#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>   // std::time
#include <cstdlib> //std::rand, std::srand

using namespace std;

int main(){

    int n;
    cin >> n;

    string s[n];
    int m[n];

    for(int i = 0; i < n; ++i){
        cin >> s[i] >> m[i];
    }

    sort(s, s + n);
    sort(m, m + n);

    for(int i = 0; i < n; ++i){
        cout << s[i] << " " <<  m[i] << endl;
        //printf("%s %i\n",s[i].c_str(), m[i]);
    }

    return 0;
}