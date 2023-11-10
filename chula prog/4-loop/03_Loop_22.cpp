#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    int divisor = 2;

    cin >> n;

    while(divisor < n){
        if(n % divisor == 0){
            break;
        }
        divisor++;
    }

    n /= divisor;
    cout << divisor;

    while(n != 1){
        while(divisor < n){
            if(n % divisor == 0){
                break;
            }
            divisor++;
        }

        while(n % divisor == 0){
            n /= divisor;
            cout << "*" << divisor;
        }
    }

    return 0;
}