#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void find_n(int n, vector<int> &sol, int sum){
  if(sum == n){
    // for(auto &e : sol){
    //   cout << e << " ";
    // }
    // cout << endl;
    cnt++;
  }
  else if(sol.size() < n){
    
    int start = 1;
    if(sol.size() > 0 ) start = sol[sol.size() - 1];
    
    for(int i = start; i <= n; i++){
      // cout << "sum : " << sum << endl << "value : ";
      // for(auto &e : sol){
      //   cout << e << " ";
      // }
      // cout << endl;
      if(sum + i <= n){
        sol.push_back(i);
        find_n(n, sol, sum + i);
        sol.erase(sol.end() - 1);
      }
      else continue;
    }
  }
  else{
    // for(auto &e : sol){
    //   cout << e << " ";
    // }
    // cout << endl;
    cnt++;
  }
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a = {};

  find_n(n, a, 0);

  cout << cnt;

  return 0;
}