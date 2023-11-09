#include <bits/stdc++.h>
using namespace std;

vector<long long> sum(110000, 0);

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, m, st;
    cin >> n >> m >> st;

    sum[0] = st;

    while(n--){
        int a, s;
        cin >> a >> s;
        sum[a] = s;
    }

    int add = st;
    for(int i = 1; i < 110000; i++){
        if(sum[i] != 0){
            add = sum[i];
        }
        sum[i] = sum[i - 1] + add;
    }

    while(m--){
        int p, x;
        cin >> p >> x;

        auto itr = lower_bound(sum.begin(), sum.end(), p);

        if(sum[x] >= *itr){
            cout << itr - sum.begin() << " ";
        }
        else {
            itr = lower_bound(sum.begin(), sum.end(), p + sum[x]);
            cout << itr - sum.begin() << " ";
        }
    }

    return 0;
}