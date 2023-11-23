#include <bits/stdc++.h>
using namespace std;

bool div_con(vector<int> v){
  // for(auto e : v){
  //   cout << e;
  // }
  // cout << endl << "----" << endl;
  if(v.size() == 2){
    if(v[0] == 0 && v[1] == 1){
      //cout << "true" << "-> ";
      return true;
    }
    else{
      //cout << "false" << "-> ";
      return false;
    }
  }
  
  vector<int> vf, vfr, vb;
  // cout << "front : " << endl;
  for(int i = 0; i < v.size() / 2; i++){
    // cout << v[i] << " ";
    vf.push_back(v[i]);
    vfr.push_back(v[i]);
  }
  // cout << endl << "back : " << endl;
  for(int i = v.size() / 2; i < v.size(); i++){
    // cout << v[i] << " ";
    vb.push_back(v[i]);
  }

  reverse(vfr.begin(), vfr.end());

  return (div_con(vfr) || div_con(vf)) && div_con(vb);
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, k, len;
  cin >> n >> k;

  len = pow(2, k);

  for(int i = 0; i < n; i++){
    vector<int> v(len, 0);

    for(int j = 0 ; j < len; j++){
      cin >> v[j];
    }

    if(div_con(v)){
      cout << "yes" << endl;
    }
    else{
      cout << "no" << endl;
    }
  }

  return 0;
}