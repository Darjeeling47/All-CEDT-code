#include <bits/stdc++.h>
using namespace std;

list<int> zuma;
list<int>::iterator fnt, bck;


bool boom(list<int>::iterator itr){
  auto itr_front = itr;
  auto itr_back = itr;

  while(itr_back != zuma.end()){
    if(*itr == *itr_back) itr_back++;
    else break;
  }
  while(itr_front != zuma.begin()){
    if(*itr == *itr_front) itr_front--;
    else break;
  }
  if(itr_front != zuma.begin())
    itr_front++;

  auto temp = itr_front;
  int cnt = 0;
  for(;temp != itr_back; temp++){
    cnt++;
  }
  if(cnt < 3){
    return false;
  }

  bck = zuma.erase(itr_front, itr_back);
  //cout << *bck << endl;
  fnt = --bck;
  bck++;
  //cout << *fnt << " " << *bck << endl;
  return true;
}

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  int n, k, v;
  cin >> n >> k >> v;

  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    zuma.push_back(tmp);
  }

  auto itr = zuma.begin();
  while(k--)
    itr++;

  zuma.insert(itr, v);
  itr--;

  bool go = boom(itr);
  if(go)
    while(*fnt == *bck && bck != zuma.end()){
      boom(--bck);
    }
  
  for(auto &e : zuma)
    cout << e << " ";

  return 0;
}