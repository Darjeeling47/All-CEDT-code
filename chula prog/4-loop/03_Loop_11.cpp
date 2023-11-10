#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n = 1;
    double sum, a, avg;
    int ch = 0;

    sum = 0;
    while(n == 1){
        
        cin >> a;

        if(a == -1){
            break;
        }

        sum += a;
        ch++;
    }

    if(sum == 0){
        cout << "No Data" << endl;
        return 0;
    }

    avg = sum / ch;
    cout << round(avg * 100) / 100 << endl;

    return 0;
}