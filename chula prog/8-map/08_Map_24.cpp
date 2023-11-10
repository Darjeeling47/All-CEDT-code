#include <bits/stdc++.h>
using namespace std;

map<string, double> m1, m2;
vector<string> v;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, m;

    cin >> n;
    while(n--){
        string a;
        double b;
        cin >> a >> b;
        m1[a] = b;
        m2[a] = 0;
    }

    double sum = 0;
    cin >> m;
    while(m--){
        string a;
        int b;
        cin >> a >> b;

        if(m1.find(a) == m1.end()) continue;

        sum += m1[a] * b;
        m2[a] += m1[a] * b;
    }

    if(sum == 0){
        cout << "No ice cream sales";
        return 0;
    }

    cout << "Total ice cream sales: " << sum << endl;

    double mx = 0;
    for(auto & e : m2){
        if(mx <= e.second){
            mx = e.second;
        }
    }

    for(auto & e : m2){
        if(mx == e.second){
            v.push_back(e.first);
        }
    }

    sort(v.begin(), v.end());

    cout << "Top sales: ";
    for(auto e : v){
        cout << e << " ";
    }



    return 0;
}