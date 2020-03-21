#include <iostream>
#include <map>

using namespace std;

int main(){

    string user_exists = "user already exists";
    string user_added = "new user added";

    map<string, bool> students;
    int n;
    string name;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> name;
        if(students[name] == true){
            cout << user_exists << endl;
        }else{
            students[name] = true;
            cout << user_added << endl;
        }
    }


    return 0;
}