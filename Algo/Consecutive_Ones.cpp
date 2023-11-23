#include <bits/stdc++.h>
using namespace std;

int count_n = 0;

void fnd(vector<int> &v, int n, int m){
  if(v.size() == n){
    int cnt = 0;
    bool ok = false;
    for(int i = 0; i < n; i++){
      if(v[i] == 1){
        cnt++;
      }
      else{
        cnt = 0;
      }
      if(cnt >= m){
        ok = true;
        break;
      }
    }

    if(ok){
      for(auto e : v){
        cout << e ;
      }
      cout << endl;
    }

    return;
  }

  for(int i = 0; i < 2; i++){
    v.push_back(i);
    fnd(v, n, m);
    v.erase(v.end() - 1);
  }
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<int> v;

  fnd(v, n, m);

  return 0;
}