#include <bits/stdc++.h>
using namespace std;

string car;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;

    cin >> car >> n;

    int num, shift;

    num = stoi(car.substr(4, 3));
    shift = n / 1000;
    n %= 1000;

    while(shift--){
        if(car[2] > 'Z'){
            car[2] = 'A';
            car[1] += 1;
        }
        if(car[1] > 'Z'){
            car[1] = 'A';
            car[0] += 1;
        }

        car[2]++;
    }

    while(n--){
        if(car[6] > '9'){
            car[6] = '0';
            car[5] += 1;
        }
        if(car[5] > '9'){
            car[5] = '0';
            car[4] += 1;
        }
        if(car[4] > '9'){
            car[4] = '0';
            car[2] += 1;
        }
        if(car[2] > 'Z'){
            car[2] = 'A';
            car[1] += 1;
        }
        if(car[1] > 'Z'){
            car[1] = 'A';
            car[0] += 1;
        }

        car[6]++;
    }

    if(car[6] > '9'){
        car[6] = '0';
        car[5] += 1;
    }
    if(car[5] > '9'){
        car[5] = '0';
        car[4] += 1;
    }
    if(car[4] > '9'){
        car[4] = '0';
        car[2] += 1;
    }
    if(car[2] > 'Z'){
        car[2] = 'A';
        car[1] += 1;
    }
    if(car[1] > 'Z'){
        car[1] = 'A';
        car[0] += 1;
    }

    cout << car;

    return 0;
}