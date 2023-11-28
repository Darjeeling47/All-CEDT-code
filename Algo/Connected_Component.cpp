#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, e;
  cin >> n >> e;

  map<int, set<int>> m;
  vector<bool> v(300000, false);

  if(e == 0){
    cout << n;
    return 0;
  }

  for(int i = 1; i <= n; i++){
    m[i].clear();
  }

  for(int i = 0; i < e; i++){
    int a, b;
    cin >> a >> b;
    m[a].insert(b);
    m[b].insert(a);
  }

  int cnt = 0;
  for(auto &e : m){
    // cout << e.first << endl;
    if(!v[e.first]){
      stack<int> s;

      cnt++;
      v[e.first] = true;
      // cout << "Push : " << e.first << " ";
      s.push(e.first);

      while(!s.empty()){
        int tmp = s.top();
        s.pop();
        for(auto &f : m[tmp]){
          if(!v[f]){
            // cout << f << " ";
            s.push(f);
            v[f] = true;
          }
        }
      }
      // cout << endl;
    }
  }

  cout << cnt;

  return 0;
}
