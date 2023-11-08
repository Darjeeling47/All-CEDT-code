#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double n;

    cin >> n;

    //billion cases
    if(n >= 10000000000){
        n = round(n / 1000000000);
        cout << n << "B" << endl;
        return 0;
    }
    if(n >= 1000000000 && n < 10000000000){
        n = round((n / 1000000000) * 10) / 10.0;
        cout << n << "B" << endl;
        return 0;
    }

    //million cases
    if(n >= 10000000){
        n = round(n / 1000000);
        cout << n << "M" << endl;
        return 0;
    }
    if(n >= 1000000 && n < 10000000){
        n = round((n / 1000000) * 10) / 10.0;
        cout << n << "M" << endl;
        return 0;
    }

    //thousand cases
    if(n >= 10000){
        n = round(n / 1000);
        cout << n << "K" << endl;
        return 0;
    }
    if(n >= 1000 && n < 10000){
        n = round((n / 1000) * 10) / 10.0;
        cout << n << "K" << endl;
        return 0;
    }
    cout << n << endl;

    return 0;
}