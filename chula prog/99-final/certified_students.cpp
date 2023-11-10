#include <bits/stdc++.h>
using namespace std;

map<string, int> m1;
map<int, vector<string>> m2;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    while(n--){
        string a;
        int b;

        cin >> a >> b;

        if(m1[a] < b){
            m1[a] = b;
        }
    }

    int m, cnt = 0;
    cin >> m;

    for(auto & e : m1){
        m2[e.second * -1].push_back(e.first);
    }

    for(auto & e : m2){
        cout << e.first * -1 << " ";

        for(auto & f : e.second){
            cout << f << " ";
            cnt++;
        }

        if(cnt >= m) break;

        cout << endl;
    }

    return 0;
}