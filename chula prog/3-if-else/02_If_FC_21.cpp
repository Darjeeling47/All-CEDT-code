#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int a, b, c, d, tmp;

    cin >> a >> b >> c >> d;

    if(a > b){
        tmp = a;
        a = b;
        b = tmp;

        if(d >= a){
            if(c > d){
                c -= a;
            }
        }   
        else{
            c += a;
        }

        b = a + c + d;
    }
    else{
        if(c > a && a >= b){
            d += a;
        }
        
        if(d > c){
            b += 2;
        }
        else {
            b *= 2;
        }
    }

    cout << a << " " << b << " " << c << " " << d;

    return 0;
}