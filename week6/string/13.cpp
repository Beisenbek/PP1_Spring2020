#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
   
    stringstream ss;
    string s =  "14";    
    ss << s;

    double d;
    ss >> d;
    cout << sqrt(d) << endl;

    return 0;
}