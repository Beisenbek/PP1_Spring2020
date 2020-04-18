//lab6 - C
#include <iostream>

using namespace std;

void read(int * arr, int n){
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
}

int cnt_x_in_array(int * arr, int n, int x){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] == x){
            cnt++;
        }
    }
    return cnt;
}

int main(){

    int n;
    cin >> n;
    int a[n], b[n];

    read(a, n);
    read(b, n);

    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(cnt_x_in_array(a, i, a[i]) == 0){
            cnt += cnt_x_in_array(b, n, a[i]);
        }
    }

    cout << cnt << endl;

    return 0;
}