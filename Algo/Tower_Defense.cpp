#include <bits/stdc++.h>
using namespace std;

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, m, k, w;
  cin >> n >> m >> k >> w;
  vector<int> tow, mon, mon_pow;

  for(int i = 0; i < m; i++){
    int tmp;
    cin >> tmp;
    mon.push_back(tmp);
  }
  for(int i = 0; i < m; i++){
    int tmp;
    cin >> tmp;
    mon_pow.push_back(tmp);
  }
  for(int i = 0; i < k; i++){
    int tmp;
    cin >> tmp;
    tow.push_back(tmp);
  }

  for(int i = 0; i < mon.size(); i++){
    int e = mon[i];
    // cout << "mon lo : " << e << endl;
    // cout << "mon po : " << mon_pow[i] << endl;
    for(int j = e - w; j <= e + w; j++){
      // cout << j << " ";
      auto itr = find(tow.begin(), tow.end(), j);
      if(itr != tow.end()){
        // cout << " find ";
        if(mon_pow[i] > 0){
          mon_pow[i] -= 1;
          tow.erase(itr);
        }
      }
    }
    // cout << endl;
  }

  int sum = 0;
  for(auto &e : mon_pow)
    sum += e;

  cout << sum;

  return 0;
}