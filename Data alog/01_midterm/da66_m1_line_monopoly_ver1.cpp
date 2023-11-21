#include <bits/stdc++.h>
using namespace std;

int main(){

  cin.tie(NULL) -> sync_with_stdio(false);

  set<int> s, sf, sf2;
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int que;
    cin >> que;

    if(que == 1){
      int a, b;
      cin >> a >> b;
      if(s.find(a) == s.end() && (s.find(a - 1) != s.end() || s.find(a + 1) != s.end()))
        sf.insert(a);
      // sf2.insert(a);
      for(int i = a; i <= b; i++){
        s.insert(i);
      }
    }
    else{
      // for(auto itr = sf.begin(); itr != sf.end(); itr++){
      //   int e = *itr;
      //   if(s.find(e) != s.end() && s.find(e - 1) != s.end() && s.find(e + 1) != s.end()){
      //     sf2.erase(e);
      //   }
      // }
      // sf = sf2;
      // cout << sf2.size() << "\n";

      // int a, b, sum = 1;
      // a = *(s.begin());
      // for(auto itr = s.begin(); itr != s.end(); itr++){
      //   if(*(itr) == a){
      //     a++;
      //   }
      //   else{
      //     a = *(itr);
      //     a++;
      //     sum++;
      //   }
      // }
      // cout << sum << "\n";

      cout << sf.size() << "\n";
    }
  }

  return 0;
}