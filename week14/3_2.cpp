//lab6 - C
#include <iostream>

using namespace std;


int a[10000], b[10000];
int n;

void read(){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
}

bool exists(int i){
    bool exists = false;
    for(int j = 0; j < i; ++j){
        if(a[i] == a[j]){
            exists = true;
            break;
        }
    }
    return exists;
}

int cnt_in_second_array(int i){
    int cnt = 0;
    for(int j = 0; j < n; ++j){
        if(a[i] == b[j]){
            cnt++;
        }
    }
    return cnt;
}

int main(){

    cin >> n;

    read();
   
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(!exists(i)){
            cnt += cnt_in_second_array(i);
        }
    }

    cout << cnt << endl;

    return 0;
}