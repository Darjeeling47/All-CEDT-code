#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int d, m, y, sum = 0;

    cin >> d >> m >> y;

    y -= 543;

    if(m >= 1){
        sum += 0;
    }
    if(m >= 2){
        sum += 31;
    }
    if(m >= 3){
        if(y % 4 == 0){
            if(y % 100 == 0){
                if(y % 400 == 0){
                    sum += 1;
                }
            }
            else {
                sum += 1;
            }
        }
        sum += 28;
    }
    if(m >= 4){
        sum += 31;
    }
    if(m >= 5){
        sum += 30;
    }
    if(m >= 6){
        sum += 31;
    }
    if(m >= 7){
        sum += 31;
    }
    if(m >= 8){
        sum += 30;
    }
    if(m >= 9){
        sum += 31;
    }
    if(m >= 10){
        sum += 30;
    }
    if(m >= 11){
        sum += 31;
    }
    if(m >= 12){
        sum += 30;
    }

    sum += d;

    cout << sum << endl;

    return 0;
}