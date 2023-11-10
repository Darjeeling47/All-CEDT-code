// Eyeball

#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double xm, ym, xe, ye, xp, yp, re, rp;
    double x, y, xy, rs;

    cin >> xe >> ye >> re >> rp >> xm >> ym;

    x = xm - xe;
    y = ym - ye;
    xy = sqrt(pow(x, 2) + pow(y, 2));
    rs = re - rp;

    xp = ((rs * x) / xy) + xe;
    yp = ((rs * y) / xy) + ye;

    cout << round(xp) << " " << round(yp);

    return 0;
}