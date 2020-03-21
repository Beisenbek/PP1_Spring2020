#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  
  int n, x;
  vector<int> odd, even;
  cin >> n;
  
  for(int i = 0; i < n; ++i){
    cin >> x;
    if(x % 2 == 1){
      	odd.push_back(x);
    }else{
        even.push_back(x);
    }
  }
  
  sort(odd.begin(),odd.end());
  sort(even.begin(),even.end());
  
  for(int i = even.size() - 1; i >= 0; --i){
    cout << even[i] << " ";
  }
  
  for(int i = 0; i < odd.size(); ++i){
    cout << odd[i] << " ";
  }
   
  
  return 0;
}