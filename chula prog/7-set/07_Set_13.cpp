#include <bits/stdc++.h>
using namespace std;

set<string> a, b;
string win, lose;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    while(cin >> win >> lose){
        a.insert(win);
        b.insert(lose);
    }

    for(auto & e : b){
        a.erase(e);
    }

    if(a.begin() == a.end()){
        cout << "None";
        return 0;
    }

    for(auto & e : a){
        cout << e << " ";
    }

    return 0;
}