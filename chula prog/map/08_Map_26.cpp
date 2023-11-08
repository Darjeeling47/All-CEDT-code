#include <bits/stdc++.h>
using namespace std;

map<string, set<string>> m1;
set<string> s1, s2, s3, s4;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a, b;
    while(cin >> a >> b){
        s1.clear();
        s2.clear();

        s1 = m1[a];
        s2 = m1[b];

        s1.insert(b);
        s2.insert(a);

        m1[a] = s1;
        m1[b] = s2;
    }

    cin >> a;
    s4.insert(a);
    s3 = m1[a];
    for(auto e : s3){
        s4.insert(e);
        for(auto f : m1[e]){
            s4.insert(f);
        }
    }

    for(auto & e : s4){
        cout << e << endl;
    }

    return 0;
}