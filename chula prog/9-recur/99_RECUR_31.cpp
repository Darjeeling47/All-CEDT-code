#include <bits/stdc++.h>
using namespace std;

set<string> s;

int fac(int n){
    if(n == 1) return 1;
    return n * fac(n - 1);
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a;
    cin >> a;

    int way = fac(a.size());


    return 0;
}