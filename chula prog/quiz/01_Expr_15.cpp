#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double x, y, temp1, temp2, temp3;

    cin >> x;

    temp1 = sqrt(log(pow(x + 1, 2)));
    y = pow(x, temp1) / (10 - x);

    cout << round(y * 1e6) / 1e6;

    return 0;
}