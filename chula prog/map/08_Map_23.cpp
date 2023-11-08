#include <bits/stdc++.h>
using namespace std;

map<string, int> m1;
map<int, string> m2;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);
    
    string a, b, c, d, tmp1, tmp2;
    int n1, n2;

    while(cin >> a >> b >> c >> d){
        for(int i = 0; i < d.length(); i++){
            if(d[i] == ':'){
                n1 = stoi(tmp1);
                tmp1 = "";
            }
            else if(i == d.length() - 1){
                tmp1 += d[i];
                n2 = stoi(tmp1);
                tmp1 = "";
            }
            else{
                tmp1 += d[i];
            }
        }

        //cout << n1 << " " << n2 << endl;

        if(m1.find(c) == m1.end()) m1[c] = (n1*60) + n2;
        else m1[c] = m1[c] + (n1*60) + n2;
    }

    for(auto & e : m1){
        m2[e.second] = e.first;
    }

    int i = 0;
    for(auto itr = m2.end(); itr != m2.begin();){
        auto & e = *(--itr);

        if(i == 3) break;

        cout << e.second << " --> " << e.first/60 << ":" << e.first % 60;
        cout << endl;

        i++;
    }

    return 0;
}