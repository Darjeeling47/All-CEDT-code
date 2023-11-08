#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a, b, c;
    int a1, b1, c1;
    int sizeb, sizec;
    int x, y, z;

    cin >> a >> b >> c;

    a1 = stoi(a);
    sizeb = b.length();
    sizec = c.length();
    
    x = stoi(a + b + c) - stoi(a + b);
    y = pow(10, sizec + sizeb) - pow(10, sizeb);

    z = gcd(x, y);
    x /= z;
    y /= z;

    cout << x << " / " << y;

    return 0;
}