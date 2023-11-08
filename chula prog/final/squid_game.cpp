#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    while(n--){
        long long sum = 0, m, mn = 100000000;
        cin >> m;
        while(m--){
            int a;
            cin >> a;
            sum += a;

            if(mn > a){
                mn = a;
            }
        }

        cout << sum - mn << endl;
    }   

    return 0;
}