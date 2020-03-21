#include <vector>
#include <iostream>

using namespace std;

int main(){
  
  int n;
  cin >> n;
  
  vector<pair<int, int> >v;
  
  int x, y;
  
  for(int i = 0; i < n; ++i){
    cin >> x >> y;
    v.push_back(make_pair(x, y));
  }
  
  for(int i = 0; i < n - 1; ++i){
    for(int j = i + 1; j < n; ++j){
		if(v[i].first > v[j].first){
          swap(v[i], v[j]);
        }else if(v[i].first == v[j].first && v[i].second > v[j].second){
          swap(v[i], v[j]);
        }
    }
  }
  
  
  for(int i = 0; i < n; ++i){
    cout << v[i].first << " " << v[i].second << endl;
  }
  
  
  return 0;
}