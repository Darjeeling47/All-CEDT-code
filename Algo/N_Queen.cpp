#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

bool ch(vector<vector<char>> &v, int pos1, int pos2, int n){
  for(int i = 0; i < n; i++){
    if(i != pos1)
      if(v[i][pos2] == 'Q') return false;
  }
  for(int i = pos1, j = pos2; i < n && j < n; i++, j++){
    if(i != pos1 && j != pos2)
      if(v[i][j] == 'Q') return false;
  }
  for(int i = pos1, j = pos2; i >= 0 && j >= 0; i--, j--){
    if(i != pos1 && j != pos2)
      if(v[i][j] == 'Q') return false;
  }
  for(int i = pos1, j = pos2; i < n && j >= 0; i++, j--){
    if(i != pos1 && j != pos2)
      if(v[i][j] == 'Q') return false;
  }
  for(int i = pos1, j = pos2; i >= 0 && j < n; i--, j++){
    if(i != pos1 && j != pos2)
      if(v[i][j] == 'Q') return false;
  }
  return true;
}

// bool ch_j(vector<vector<char>> &v, int pos1, int pos2, int n){
//   for(int j = 0; j < n; j++){
//     if(v[pos1][j] == 'Q') return false;
//   }
//   return true;
// }

void fnd(int n, vector<vector<char>> &v, int amt, int pos1, int pos2){
  if(amt == n){
    cnt++;
    // cout << "ATTEMP : " << cnt << endl;
    // for(int i = 0; i < n; i++){
    //   for(int j = 0; j < n; j++){
    //     cout << v[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    // cout << "------------" << endl;
    return;
  }

  int i = pos1;
  //for(int i = pos1; i < n; i++){
    // if(!ch_j(v, i, 0, n)) continue;
    // if(i != pos1) pos2 = 0;
    for(int j = pos2; j < n; j++){
      if(ch(v, i, j, n)){
        v[i][j] = 'Q';
        fnd(n, v, amt + 1, i + 1, 0);
        v[i][j] = '!';
      }
    }
  //}
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n;
  cin >> n;

  vector<vector<char>> v;

  for(int i = 0; i <= n; i++){
    vector<char> tmp;
    for(int j = 0; j <= n; j++){
      tmp.push_back('!');
    }
    v.push_back(tmp);
  }

  fnd(n, v, 0, 0, 0);
  cout << cnt;

  return 0;
}