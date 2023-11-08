#include <bits/stdc++.h>
using namespace std;

int mod(int a, int k, int m){

    int k1 = floor(k/2);
    int tmp;

    if(k == 0){
        return 1;
    }
    else if(k % 2 == 0){
        tmp = mod(a, k1, m);
        return ((tmp * tmp) % m);
    }
    else if(k % 2 == 1){
        tmp = mod(a, k1, m);
        return (a * (tmp * tmp) % m);
    }

    return 0;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int a, k, m;

    cin >> a >> k >> m;

    cout << mod(a, k, m);

    return 0;
}