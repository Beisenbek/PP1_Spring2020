#include <iostream>
#include <vector>

using namespace std;

bool exists(string name, vector<string> * students){
    bool res = false;
    for(int i = 0; i < students->size(); ++i){
        if(name == students->at(i)){
            res = true;
            break;
        }
    }
    return res;
}

int main(){

    string user_exists = "user already exists";
    string user_added = "new user added";

    vector<string> students;
    int n;
    string name;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> name;
        if(exists(name, &students)){
            cout << user_exists << endl;
        }else{
            students.push_back(name);
            cout << user_added << endl;
        }
    }


    return 0;
}