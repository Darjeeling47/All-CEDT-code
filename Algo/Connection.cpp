#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, e, k;
  cin >> n >> e >> k;

  vector<set<int>> v(n);

  for(int i = 0; i < e; i++){
    int a, b;
    cin >> a >> b;
    v[a].insert(b);
    v[b].insert(a);
  }

  int mx = -1, cnt;
  for(int i = 0; i < n; i++){
    // cout << "s : " << i << endl;
    
    cnt = 0;
    vector<int> visited(n, -1);
    queue<int> q;
    q.push(i);
    visited[i] = 0;

    while(!q.empty()){
      int tmp = q.front();
      q.pop();
      // cout << "   " << visited[tmp] << " : " << tmp << endl;
      cnt++;
      
      if(visited[tmp] < k){
        for(auto e : v[tmp]){
          if(visited[e] == -1){
            q.push(e);
            visited[e] = visited[tmp] + 1;
          }
        }
      }
    }
    
    if(mx < cnt){
      mx = cnt;
    }
  }

  cout << mx;

  return 0;
}