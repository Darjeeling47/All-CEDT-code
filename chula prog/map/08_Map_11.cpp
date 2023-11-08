#include <bits/stdc++.h>
using namespace std;

map<string, string> m;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, o;

    cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;
        m[a] = b;
        m[b] = a;
    }

    cin >> o;
    while(o--){
        string a;
        cin >> a;
        if(m.find(a) == m.end()){
            cout << "Not found" << endl;
            continue;
        }
        cout << m[a] << endl;
    }

    return 0;
}