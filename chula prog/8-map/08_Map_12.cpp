#include <bits/stdc++.h>
using namespace std;

map<string, string> m;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, o;
    cin >> n;
    while(n--){
        string a, b, c, d;
        cin >> a >> b >> c;

        d = a + " " + b;

        m[d] = c;
        m[c] = d;
    }

    cin >> o;
    cin.ignore();
    while(o--){
        string c;
        getline(cin, c);

        if(m.find(c) == m.end()){
            cout << c << " --> " << "Not found" << endl;
            continue;
        }
        cout << c << " --> " << m[c] << endl;
    }  

    return 0;
}