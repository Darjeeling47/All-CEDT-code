#include <bits/stdc++.h>
using namespace std;

map<string, double> a, b;
vector<pair<double, string>> c;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string s;
    while(cin >> s, s != "END"){
        cin >> a[s];
        b[s] = 0;
    }

    while(cin >> s){
        b[s] -= a[s];
    }

    auto itr2 = b.begin();
    for(auto itr1 = a.begin(); itr1 != a.end(); itr1++){
        c.push_back({(*itr2).second , (*itr1).first});
        itr2++;
    }

    sort(c.rbegin(), c.rend());

    int l = c.size();
    int ch = 0;
    for(int i = l - 1; i >= l - 3; i--){
        if(c[i].first == 0){
            ch++;
            continue;
        }
        cout << c[i].second << " " << abs(c[i].first) << endl;
    }

    if(ch == 3){
        cout << "No Sales";
    }

    return 0;
}