#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int>> v1;
vector<pair<int, string>> v3;
vector<pair<double, string>> v2;
vector<pair<int, pair<int, string>>> v4;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a;
    int b;
    double avg = 0;

    while(cin >> a){
        if(a == "END") break;

        cin >> b;

        avg += b;

        v1.push_back(make_pair(a, b));
        v2.push_back(make_pair((double)b, a));
        v3.push_back(make_pair(0, a));
    }

    avg /= 100;
    int sum = 0;

    for(int i = 0; i < v1.size(); i++){
        v2[i].first /= avg;
        sum += (int)v2[i].first;
        v3[i].first = (int)v2[i].first;
        v2[i].first -= v3[i].first; //v3 store int v2 store double
    }

    int mre;
    if(sum != 100){
        mre = 100 - sum;
    }

    // cout << "avg : " << avg << endl;
    // cout << "sum : " << sum << endl;
    // cout << "mre : " << mre << endl;

    sort(v2.rbegin(), v2.rend());

    for(int i = 0; i < mre; i++){
        string nm = v2[i].second;
        for(auto & e : v3){
            if(e.second == nm){
                e.first += 1;
            }
        }
    }

    sort(v3.rbegin(), v3.rend());

    for(auto & e : v3){
        if(e.first == 0) break;
        for(auto & f : v1){
            if(e.second == f.first) v4.push_back(make_pair(e.first, make_pair(f.second, e.second)));
        }
    }

    sort(v4.rbegin(), v4.rend());

    for(auto & e : v4){
        cout << e.second.second << " " << e.first << " " << e.second.first << endl;
    }

    return 0;
}