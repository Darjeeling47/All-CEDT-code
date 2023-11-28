#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int f, w, n;
  cin >> f >> w >> n;

  vector<int> v(n + 1, 0);
  
  for(int i = 0; i < f; i++){
    int tmp;
    cin >> tmp;
    v[tmp] = 1;
  }

  int cnt = 0;
  for(int i = 1; i <= n; i++){
    if(v[i] == 1){
      i += w * 2;
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}