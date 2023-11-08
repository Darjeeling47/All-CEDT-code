#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double a, x;

    cin >> a;

    double l = 0;
    double u = a;

    x = l + (u - l) / 2;

    while(abs(a - pow(10.0, x)) >= pow(10.0, -10.0)){

        if(pow(10.0, x) > a){
            u = x;
        }
        else{
            l = x;
        }

        x = l + (u - l) / 2;
    }

    cout << x << endl;

    return 0;
}