#include <bits/stdc++.h>
using namespace std;

map<string, int> sub;
map<string, vector<string>> m1;
map<double, string> m2;
map<string, string> m3;
vector<string> tmp, v;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    while(n--){
        string a;
        int b;

        cin >> a >> b;

        sub[a] = b;
    }

    int m;
    cin >> m;
    
    while(m--){
        string id, a, b, c, d;
        double sc;

        cin >> id >> sc >> a >> b >> c >> d;
        sc *= -1;

        tmp.clear();
        tmp.push_back(a);
        tmp.push_back(b);
        tmp.push_back(c);
        tmp.push_back(d);

        m1[id] = tmp;
        m2[sc] = id;

        tmp.clear();
    }

    for(auto & e : m2){
        v = m1[e.second];

        for(auto & f : v){
            if(sub[f] != 0){
                sub[f] -= 1;
                m3[e.second] = f;
                break;
            }
        }
    }

    for(auto & e : m3){
        cout << e.first << " " << e.second << endl;
    }

    return 0;
}