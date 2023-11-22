#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    set<pair<int, int>> date;
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        date.insert({a, b});
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        auto itr = date.upper_bound({a, b});
        auto itr2 = date.lower_bound({a, b});
        
        if(itr != itr2){
            cout << "0 0 ";
        }
        else if(itr2 == date.begin()){
            cout << "-1 -1 ";
        }
        else if(itr == itr2){
            itr--;
            cout << (*itr).first << " " << (*itr).second << " ";
        }
    }

    return 0;
}