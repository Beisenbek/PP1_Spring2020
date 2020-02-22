#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string str;
    stringstream ss;

    while(getline(cin, str)){
        ss << str << " ";
    }

    int x, cnt = 0;
    while(ss >> x){
        cnt++;
    }

    cout << cnt << endl;


    return 0;
}