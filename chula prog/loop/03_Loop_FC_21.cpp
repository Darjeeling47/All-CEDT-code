#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    float p;
    int k = 1;
    double t = 1;
    t = t * (365 - (k - 1)) / 365;

    cin >> p;

    while(!(1 - t >= p)){
        k++;
        t = t * (365 - (k - 1)) / 365;
    }

    cout << k << endl;

    return 0;
}