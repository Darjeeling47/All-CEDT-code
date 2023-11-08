#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

int date(int d, int m, int y){

    int sum = 0;

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

    return sum;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int d1, m1, y1, d2, m2, y2, sum, year, leap;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    year = 365;
    leap = y1 - 543;
    if(leap % 4 == 0){
        if(leap % 100 == 0){
            if(leap % 400 == 0){
                year += 1;
            }
        }
        else {
            year += 1;
        }
    }

    sum = year - date(d1, m1, y1) + 1;
    sum += date(d2, m2, y2) - 1;
    sum += (y2 - y1 - 1) * 365;

    cout << sum << " ";

    double phy, emo, inte;

    phy = sin((2 * M_PI * sum) / 23);
    emo = sin((2 * M_PI * sum) / 28);
    inte = sin((2 * M_PI * sum) / 33);

    cout << round(phy * 100.0) / 100.0 << " " << round(emo * 100.0) / 100.0 << " " << round(inte * 100.0) / 100.0;

    return 0;
}