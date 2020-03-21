#include <iostream>
#include <vector>

using namespace std;

int main(){
  	
  vector<int> v;
  
  v.push_back(1);
  v.push_back(2);
  
  v.pop_back();
  
  cout << v[v.size() - 1];
  
  return 0;
}