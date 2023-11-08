#include <bits/stdc++.h>
using namespace std;

vector<tuple<double, int, double, double>> v;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt = 1;

    for(int i = 0; i < n; i++){
        double x, y, z;

        cin >> x >> y;
        z = sqrt(pow(x, 2) + pow(y, 2));

        v.push_back({z, cnt, x, y});

        cnt++;
    }

    sort(v.begin(), v.end());

    cout << "#" << get<1>(v[2]) << ": (" << get<2>(v[2]) << ", " << get<3>(v[2]) << ")";

    return 0;
}