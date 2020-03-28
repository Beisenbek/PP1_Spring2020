#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>   // std::time
#include <cstdlib> //std::rand, std::srand

using namespace std;

int f(){
    return rand() % 1000;
}

int main(){
    srand(time(0));

    int a[8];

    generate(a, a + 8, f);

    for(int i = 0; i < 8; ++i){
        cout << a[i] << endl;
    }

    return 0;
}