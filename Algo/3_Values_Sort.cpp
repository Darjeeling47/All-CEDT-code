#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int find_n(int start, int end, int a){
  for(int i = start; i < end; i++){
    if(v[i] == a){
      return i;
    }
  }
  return -1;
}

void swap_analog(int i1, int i2){
  int temp = v[i1];
  v[i1] = v[i2];
  v[i2] = temp;
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int a_tmp[4] = {0, 0, 0, 0};
  int cnt = 0;
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
    a_tmp[tmp]++;
  }

  for(int i = 1; i < 4; i++){
    a_tmp[i] += a_tmp[i-1];
  }

  for(int i = 0; i < a_tmp[1]; i++){
    if(v[i] == 1) continue;
    if(v[i] == 3){
      int ind = find_n(a_tmp[2], a_tmp[3], 1);
      if(ind != -1){
        swap_analog(i, ind);
        cnt++;
      }
      else{
        ind = find_n(a_tmp[1], a_tmp[3], 1);
        swap_analog(i, ind);
        cnt++;
      }
    }
    else if(v[i] == 2){
      int ind = find_n(a_tmp[1], a_tmp[3], 1);
      swap_analog(i, ind);
      cnt++;
    }
  }

  for(int i = a_tmp[1]; i < a_tmp[2]; i++){
    if(v[i] == 2) continue;
    int ind = find_n(a_tmp[2], a_tmp[3], 2);
    swap_analog(i, ind);
    cnt++;
  }

  // for(auto e : v){
  //   cout << e << " ";
  // }
  cout << endl;

  cout << cnt;

  return 0;
}