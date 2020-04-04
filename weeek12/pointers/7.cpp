#include <iostream>

using namespace std;

void print2(int n, char * values){
    cout << n << " " << values << endl;
}

void print3(int n, char values){
    cout << n <<  " " << values << endl; 
}

void print(int n, char ** values){
    for(int i = 0; i < n; ++i){
        cout << values[i] << endl;
    }
}


int main(){
    //print3(12, 'A');
    //print2(12, "AB");
    //char c[] = {'A', 'B'}; print2(12, c);

    //char s[][4] = {{'K','B','T','U'}};
    char t1[] = {'K','B','T','U','!','\0'};
    char t2[] = {'F','I','T','\0'};
    char t3[] = {'F','E','F','\0'};
    char * s[] = {t1, t2, t3}; 

    print(3, s);

    
    return 0;
}