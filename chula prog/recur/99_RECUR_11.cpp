#include <bits/stdc++.h>
using namespace std;

string dec2hex(int d) {
    string a = "0123456789ABCDEF";
    string b;
    if(d < 16){
        b += a[d];
        return b;
    }
    return dec2hex(d/16) + dec2hex(d%16);
}

int main() {
    int d;

    while (cin >> d) {
        cout << d << " -> " << dec2hex(d) << endl;
    }
    
    return 0; 
}

