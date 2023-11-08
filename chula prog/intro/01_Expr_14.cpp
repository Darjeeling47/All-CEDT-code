// Songkran

#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int a, b, c;

    cin >> a;

    b = (a - 543) % 100;
    c = (b + (b/4) + 11) % 7;

    cout << c;

    return 0;
}