#include <iostream>
#include <vector>

using namespace std;

int main(){
  	
  vector<int> v;
  
  v.insert(v.begin(), 151, 2);
  cout << v.size() << endl;
  
  return 0;
}