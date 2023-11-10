//An_Expression

#include <iostream>
#include <math.h>
using namespace std;

const int MaxN = 10e8;

int factorail(double num){
    double sum = 1;
    for(int i = 1; i <= num; i++){
        sum = sum * i;
    }

    return sum;
}   

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double a, b, c, d;

    a = M_PI - (factorail(10)/pow(8, 8));
    b = (7 / sqrt(71)) - sin(40 * M_PI / 180);
    c = pow(2.3, 1.0 / 3);
    d = (a + pow(log(9.7), b)) / pow(1.2, c);

    cout << d;

    return 0;
}