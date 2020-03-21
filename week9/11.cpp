#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  
   
  vector<int> v;
  
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  
  for(int i = 0; i < v.size(); ++i){
    cout << v[i] << " ";
  }
  
  vector<int> :: iterator it; 

  cout << endl;
  
  for(it = v.begin(); it != v.end(); ++it){
    cout << *it << " ";
  }
   
  
  return 0;
}