#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int x;

    int max_value = -1e9 - 17;
    int second_max_value = -1e9 - 17;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> x;
            if(max_value < x){
                second_max_value = max_value;
                max_value = x;
            }else if(max_value > x && second_max_value < x){
                second_max_value = x;
            }
        }
    }

    if(second_max_value == -1e9-17)
        cout << 0;
    else 
        cout << second_max_value;

    return 0;
}