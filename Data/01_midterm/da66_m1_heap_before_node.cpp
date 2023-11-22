#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int recur_node(int n,int a){
  int cnt = 1;

  v[a] = 0;
  
  if(a * 2 + 1 < n){
    cnt += recur_node(n, a * 2 + 1);
  }
  else
    return 1;

  if(a * 2 + 2 < n){
    cnt += recur_node(n, a * 2 + 2);
  }
  else 
    return 1;

  return cnt;
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, a;
  cin >> n >> a;

  if(a == 0){
    cout << 0;
    return 0;
  }

  for(int i = 0; i < n; i++){
    v.push_back(1);
  }

  cout << n - recur_node(n, a) << endl;

  for(int i = 0; i < n; i++){
    if(v[i] == 1)
      cout << i << " ";
  }

  return 0;
}