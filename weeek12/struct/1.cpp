#include <iostream>

using namespace std;

void printPoint(pair<int, int> p){
    cout << p.first << " " << p.second << endl;
}

int main(){
    
    pair<int, int> point;

    point.first = 12;
    point.second = 30;

    printPoint(point);
    

    return 0;
}