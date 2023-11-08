// Body_Surface_Area

#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double h, w, mos, hay, boy;

    cin >> w >> h;

    mos = sqrt(w * h) / 60;
    hay = 0.024265 * pow(w, 0.5378) * pow(h, 0.3964);
    boy = 0.0333 * pow(w, 0.6157 - 0.0188 * log10(w)) * pow(h, 0.3);

    cout << setprecision(15) << mos << endl;
    cout << setprecision(15) << hay << endl;
    cout << setprecision(15) << boy << endl;

    return 0;
}