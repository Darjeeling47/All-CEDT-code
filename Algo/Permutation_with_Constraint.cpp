#include <bits/stdc++.h>
using namespace std;

void fnd(vector<int> &v, vector<int> a, vector<int> b, int n, int m){
  if(v.size() == n){

    for(auto e : v){
      cout << e << " ";
    }
    cout << endl;
    // cout << "----------" << endl;
    return;
  }

  for(int i = 0; i < n; i++){
    if(find(v.begin(), v.end(), i) != v.end()) continue;
    
    bool status = false;
    for(int j = 0; j < m; j++){
      if(find(v.begin(), v.end(), a[j]) > find(v.begin(), v.end(), b[j])){
        status = true;
        break;
      }
    }

    if(status) return;

    v.push_back(i);
    fnd(v, a, b, n, m);
    v.erase(v.end() - 1);
  }
  return;
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<int> v, a, b;

  for(int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    a.push_back(x);
    b.push_back(y);
  }

  fnd(v, a, b, n, m);

  return 0;
}