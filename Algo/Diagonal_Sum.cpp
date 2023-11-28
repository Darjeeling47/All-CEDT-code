#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n;
  cin >> n;

  vector<ll> row_temp(n + 2, 0);
  vector<vector<ll>> v(n + 2, row_temp);
  vector<ll> ans;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cin >> v[i][j];
    }
  }

  reverse(v.begin(), v.end());
  for(auto &e : v){
    reverse(e.begin(), e.end());
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      v[i][j] += v[i - 1][j - 1];
    }
  }

  reverse(v.begin(), v.end());
  for(auto &e : v){
    reverse(e.begin(), e.end());
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      ans.push_back(v[i][j]);
    }
  }

  cout << *(max_element(ans.begin(), ans.end()));

  return 0;
}