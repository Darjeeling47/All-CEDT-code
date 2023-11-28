#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

  #define int double

  cin.tie(NULL) -> sync_with_stdio(false);

  double w;
  int n;
  cin >> w >> n;

  vector<double>v, we;
  set<pair<int, int>> vpw;

  for(int i = 0; i < n; i++){
    double tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  for(int i = 0; i < n; i++){
    double tmp;
    cin >> tmp;
    we.push_back(tmp);
    vpw.insert({(v[i] / tmp) * -1 , i});
  }

  double cost = 0;
  for(auto &e : vpw){
    double val = e.first * -1;
    // cout << w << " : " << we[e.second] << " : " << val;
    if(w >= we[e.second]){
      cost += v[e.second];
      w -= we[e.second];
      // cout << " " << cost << endl;
    }
    else{
      cost += w * val;
      // cout << " " << cost << endl;
      break;
    }
  }

  cout << fixed << setprecision(4) << cost;
}