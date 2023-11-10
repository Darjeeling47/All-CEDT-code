#include <bits/stdc++.h>
using namespace std;

set<int> a;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int tmp, cnt = 0;
    while(cin >> tmp){
        if(a.find(tmp) == a.end()){
            a.insert(tmp);
            cnt++;
        }
        else{
            cout << cnt + 1;
            return 0;
        }
    }

    cout << "-1";

    return 0;
}

