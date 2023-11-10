#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double a1, a2, a3, a4, sum;
    double mx = 0, mn = 100;

    cin >> a1 >> a2 >> a3 >> a4;

    
    if(mx < a1){
        mx = a1;
    }
    if(mx < a2){
        mx = a2;
    }
    if(mx < a3){
        mx = a3;
    }
    if(mx < a4){
        mx = a4;
    }

    if(mn > a1){
        mn = a1;
    }
    if(mn > a2){
        mn = a2;
    }
    if(mn > a3){
        mn = a3;
    }
    if(mn > a4){
        mn = a4;
    }

    sum = (a1 + a2 + a3 + a4 - mx - mn) / 2;
    cout << round(sum * 100.0) / 100.0 << endl;

    return 0;
}