#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>   // std::time
#include <cstdlib> //std::rand, std::srand

using namespace std;

int numbersOfO(string s){
    int res = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'o') res++;
    }
    return res;
}

bool comparator(string s1, string s2){
    int n1 = numbersOfO(s1);
    int n2 = numbersOfO(s2);
    if(n1 < n2) return true;
    else if(n1 == n2) return s1 < s2;
    return false;
}

int main(){
    string a[] = {"ooa","ookkkkk", "o","ook", "p"};
    //p, o, ooa, ook, ookkkk
    sort(a, a + 5, comparator);

    for(int i = 0; i < 5; ++i){
        cout << a[i] << " ";
    }

    return 0;
}