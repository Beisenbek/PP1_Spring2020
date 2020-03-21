#include <iostream>
#include <set>

using namespace std;

int main(){

    string user_exists = "user already exists";
    string user_added = "new user added";

    set<string> students;
    int n;
    string name;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> name;
        if(students.find(name) != students.end()){
            cout << user_exists << endl;
        }else{
            students.insert(name);
            cout << user_added << endl;
        }
    }


    return 0;
}