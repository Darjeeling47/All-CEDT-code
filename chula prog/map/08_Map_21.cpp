#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> m;
vector<string> m1;
vector<string> v;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a, b;

    while(cin >> a >> b){

        if(find(m1.begin(), m1.end(), b) == m1.end()) {
            m1.push_back(b);
        }

        v.clear();
        v = m[b];
        v.push_back(a);
        m[b] = v;
    }

    for(auto & e : m1){
        auto i = m.find(e);
        auto & f = *i;

        cout << f.first << ": ";
        for(auto & g : f.second){
            cout << g << " ";
        }
        cout << endl;
    }

    return 0;
}