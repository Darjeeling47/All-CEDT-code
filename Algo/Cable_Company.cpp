#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n;
  cin >> n;

  vector<set<pair<int, int>>> v(n);
  vector<int> visited;
  vector<int> visited2(n,0);

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int tmp;
      cin >> tmp;
      v[i].insert({tmp, j});
      v[j].insert({tmp, i});
    }
  }

  visited.push_back(0);
  visited2[0] = 1;

  int ans = 0;
  for(int i = 0; i < n - 1; i++){
    
    pair<int, int> mn = {1000000, 1000000};
    int ind, ind2;

    for(int i = 0; i < visited.size(); i++){

      if(v[visited[i]].size() == 0) continue;

      pair<int, int> p = *(v[visited[i]].begin());
      cout << "e1 : " << visited[i] << " -> " << p.second << " wei : " <<  p.first << endl;
      
      if(visited2[p.second] == 1 && visited2[i] == 1){
        v[visited[i]].erase(p);
        v[p.second].erase({p.first, visited[i]});
        cout << "ignore : " << visited[i] << endl;
        i = -1;
      }
      else{
        if(p < mn){
          mn = p;
          ind = i;
          ind2 = p.second;
        }
      }
    }

    v[ind].erase(mn);
    // v[mn.second].erase({mn.first, ind});
    ans += mn.first;
    cout << "ADD : " << mn.first << " ind : " << ind2 <<  endl;
    visited.push_back(ind2);
    visited2[ind] = 1;
    visited2[ind2] = 1;
  }

  cout << ans;

  return 0;
}