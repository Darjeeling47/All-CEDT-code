#include <bits/stdc++.h>
using namespace std;

multiset<char> m1, m2;
string s;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;
        if(s[i] > 'Z') s[i] -= 32;
        m1.insert(s[i]);
    }

    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;
        if(s[i] > 'Z') s[i] -= 32;
        m2.insert(s[i]);
    }

    if(m1 == m2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}