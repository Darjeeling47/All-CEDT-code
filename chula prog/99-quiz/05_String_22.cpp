#include <bits/stdc++.h>
using namespace std;

string x, y;

int main() {

    cin >> x >> y;

    int lx, ly, mn, mx2, cnt, pos, mx, pos2;
    lx = x.length();
    ly = y.length();

    if(lx >= ly){
        mn = ly;
        mx2 = lx;
    }
    else {
        mn = lx;
        mx2 = ly;
    }
    
    mx = 0;
    for(int i = 0; i < mx2; i++){

        cnt = 0;

        for(int j = 0; j < lx; j++){
            if(x[j] == y[j + i]){
                cnt++;
            }
        }

        if(mx < cnt){
            mx = cnt;
            pos = i;
            pos2 = 1;
        }
    }

    for(int i = 0; i < mx2; i++){

        cnt = 0;

        for(int j = 0; j < ly; j++){
            if(y[j] == x[j + i]){
                cnt++;
            }
        }

        if(mx < cnt){
            mx = cnt;
            pos = i;
            pos2 = 2;
        }
    }

    cnt = mx;
    if(pos2 == 1 && cnt != 0){
        while(pos--){
            cout << "-";
        }
    }
    cout << x << endl;
    if(pos2 == 2 && cnt != 0){
        while(pos--){
            cout << "-";
        }
    }
    cout << y << endl;
    cout << cnt;

    return 0;
}