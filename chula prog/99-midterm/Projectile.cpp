#include <bits/stdc++.h>
using namespace std;

int main() {

    double u, an, t, h, r, rad, g;

    cin >> u >> an >> t;
    // cin >> an;

    rad = an * M_PI/ 180.0;

    // cout << rad;
    g = 10;
    
    h = (t - (u * sin(rad)) / g) * ((u * sin(rad)) + (g * (t - (3 * ((u * sin(rad)) / g)))) / 2);
    r = u * cos(rad) * t;

    cout << round(h * 10) / 10 << " " << round(r * 10) / 10;
    return 0;
}