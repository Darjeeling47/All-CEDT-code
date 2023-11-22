#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    set<int> s;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(s.find(a) == s.end() && a >= 1 && a <= n){
            s.insert(a);
        }
        else{
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}