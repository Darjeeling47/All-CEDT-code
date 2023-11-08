#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < m; i++){
        int q, mn_q, mx_q;
        cin >> q;

        mn_q = q - k;
        mx_q = q + k;

        auto itr1 = lower_bound(v.begin(), v.end(), mn_q);
        auto itr2 = upper_bound(v.begin(), v.end(), mx_q);

        cout << itr2 - itr1 << " ";
    }

    return 0;
}