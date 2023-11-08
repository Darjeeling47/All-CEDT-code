#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int mn_1 = MaxN;
    int mn_2 = MaxN;
    int mx_1 = -MaxN;
    int mx_2 = -MaxN;

    int x1, y1;
    int ch = 0;
    int a;
    cin >> a;

    cin >> x1 >> y1;

    while(true){
        if(mn_1 >= x1){
            mn_1 = x1;
        }
        if(mx_1 <= y1){
            mx_1 = y1;
        }
        if(mx_2 <= x1){
            mx_2 = x1;
        }
        if(mn_2 >= y1){
            mn_2 = y1;
        }
    
        cin >> x1;
        if(x1 == 0){
            cout << mn_1 << " " << mx_1 << endl;
            break;
        }
        else if(x1 == 1){
            cout << mn_2 << " " << mx_2 << endl;
            break;
        }
        cin >> y1;
        ch++;

        if(ch % 2 == 1){
            int tmp;
            tmp = x1;
            x1 = y1;
            y1 = tmp;
        }
    }

    return 0;
}