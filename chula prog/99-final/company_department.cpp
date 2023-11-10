#include <bits/stdc++.h>
using namespace std;

map<string, string> m1;
vector<string> dep, na;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    while(n--){
        string a, b;
        cin >> a >> b;

        m1[a] = b;
        if(find(dep.begin(), dep.end(), b) == dep.end())
            dep.push_back(b);
    }

    while(m--){
        int a;
        cin >> a;
        if(a == 1){
            string name, d;
            cin >> name >> d;

            if(find(dep.begin(), dep.end(), d) == dep.end())
                dep.push_back(d);

            m1[name] = d;
        }
        else{
            string d1, d2;
            cin >> d1 >> d2;
            if(find(dep.begin(), dep.end(), d1) != dep.end())
                dep.erase(find(dep.begin(), dep.end(), d1));

            if(find(dep.begin(), dep.end(), d2) != dep.end())
                dep.erase(find(dep.begin(), dep.end(), d2)), dep.push_back(d2);
            else
                dep.push_back(d2);

            for(auto & e : m1){
                if(e.second == d1){
                    e.second = d2;
                }
            }
        }
    }

    sort(dep.begin(), dep.end());

    for(auto & e : dep){
        cout << e << ": ";
        for(auto & f : m1){
            if(f.second == e){
                na.push_back(f.first);
            }
        }
        sort(na.begin(), na.end());
        for(auto & f : na){
            cout << f << " ";
        }
        cout << endl;
        na.clear();
    }

    return 0;
}