#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;

void fill_in(int a, int b, int i1, int i2, int j1, int j2){
  if(a <= 0){
    v[i1][j1] = b;
    return;
  }

  int len = pow(2, a - 1);
  fill_in(a - 1, b, i1, i1 + len, j1, j1 + len);
  fill_in(a - 1, b - 1, i1, i1 + len, j1 + len, j2);
  fill_in(a - 1, b + 1, i1 + len, i2, j1, j1 + len);
  fill_in(a - 1, b, i1 + len, i2, j1 + len, j2);
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  for(int i = 0; i < pow(2, a); i++){
    vector<int> tmp;
    for(int j = 0; j < pow(2, a); j++){
      tmp.push_back(0);
    }
    v.push_back(tmp);
  }

  fill_in(a, b, 0, pow(2, a), 0 ,pow(2, a));

  for(auto e : v){
    for(auto f : e){
      cout << f << " ";
    }
    cout << endl;
  }

  return 0;
}