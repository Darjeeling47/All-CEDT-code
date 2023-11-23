#include <bits/stdc++.h>
using namespace std;

vector<char> s, f;
set<string> s1;

void fac(int n, string a){
    string b;
    if(a.length() == n){
        cout << "add ";
        s1.insert(a);
        return;
    }

    for(auto e : s){
        if(find(f.begin(), f.end(), e) != f.end()) continue;
        b = a;
        b += e;
        f.push_back(e);
        cout << b << "-----" << endl;
        fac(n, b);
    }
    return;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a, b;
    cin >> a;

    int n = a.length();

    for(int i = 0; i < n; i++){
        s.push_back(a[i]);
    }

    fac(n ,b);

    for(auto e : s1){
        cout << e << " ";
    }

    return 0;
}