#include <iostream>
#include <vector>

using namespace std;

int main(){
  	
  vector<int> v;
  
  v.insert(v.begin(),15);
  cout << v[0] << " ";
  cout << *v.begin() << " ";
  v.insert(v.begin(),151, 2);
  cout << v[0] << " ";
  cout << *v.begin() << " ";
  
  return 0;
}