#include <bits/stdc++.h>
using namespace std;

int n, a;
set<int> s;

void ch(int idx){
    if((idx * 2) + 1 < n){
        s.insert((idx * 2) + 1);
        ch((idx * 2) + 1);
    }
    if((idx * 2) + 2 < n){
        s.insert((idx * 2) + 2);
        ch((idx * 2) + 2);
    }
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);
    cin >> n >> a;

    // first num and recur;
    s.insert(a);
    ch(a);
    
    // print
    cout << s.size() << endl;
    for(auto &e : s){
        cout << e << " ";
    }

    return 0;
}