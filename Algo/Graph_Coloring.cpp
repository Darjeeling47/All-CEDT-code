#include <bits/stdc++.h>
using namespace std;

int mx = -1;

void fnd(vector<set<int>> &v, vector<int> &color_v, int n, int m){
  if(m == n){
    return;
  }

  int tmp;
  for(int i = 1; i <= n; i++){
    bool stus = true;
    for(auto &e : v[m]){
      if(color_v[e] == i){
        stus = false;
      }
    }
    if(stus){
      tmp = i;
      break;
    }
  }

  if(mx < tmp)
    mx = tmp;

  color_v[m] = tmp;
  
  cout << "v : " << m << " | c : " << tmp << endl;
  for(auto &e : v[m]){
    cout << "v con : " << e << " | c : " << color_v[e] << endl;
  }
  cout << "------" << endl;

  fnd(v, color_v, n, m + 1);
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, e;
  cin >> n >> e;

  vector<set<int>> v(n);
  vector<int> color_v(n, 0);

  for(int i = 0; i < e; i++){
    int a, b;
    cin >> a >> b;
    v[a].insert(b);
    v[b].insert(a);
  }

  fnd(v, color_v, n, 0);

  cout << mx;

  return 0;
}