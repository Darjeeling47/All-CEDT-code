#include <bits/stdc++.h>
using namespace std;

long long n, m, k;
vector<long long> v;

long long bs(long long a, long long b, long long ind1, long long ind2){

  long long indx = (ind2 + ind1) / 2;
  long long money = v[indx] - v[a - 1] + (indx - a + 1) * k; 

  if(money == b){
    return indx;
  }
  
  if(indx == ind1 || ind1 == ind2){
    money = v[ind2] - v[a - 1] + (ind2 - a + 1) * k;
    if(money <= b){
      return ind2;
    }
    else{
      return indx; 
    }
  }

  if(money > b){
    return bs(a, b, ind1, indx);
  }
  else{
    return bs(a, b, indx, ind2);
  }

  return 0;
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  cin >> n >> m >> k;

  v.push_back(0); // start vector at 1

  for(int i = 1; i <= n; i++){
    long long tmp;
    cin >> tmp;
    v.push_back(tmp + v[i - 1]);
  }

  for(int i = 0; i < m; i++){
    long long a, b;
    cin >> a >> b;
    a += 1; //cuse we start vector at 1 so we have to add 1

    if(b <= k){
      cout << 0 << "\n";
      continue;
    }
    else if(b <= v[a] - v[a - 1] + k){
      cout << 0 << "\n";
      continue;
    }

    long long indx = bs(a, b, a, n);
    // cout << "ANS : ";
    cout << v[indx] - v[a - 1] << "\n";
    // cout << "NEXT -----" << "\n";
  }

  return 0;
}