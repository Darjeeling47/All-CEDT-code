#include <bits/stdc++.h>
using namespace std;

int a[10000][10], b[10000];

int ovp(int i, int j){
    int w = min(a[i][2], a[j][2]) - max(a[i][0], a[j][0]);
    int h = min(a[i][3], a[j][3]) - max(a[i][1], a[j][1]);

    if(w <= 0 || h <= 0) return 0;

    return w * h;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, x1, x2, y1, y2;
    int mx = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){

        cin >> x1 >> y1 >> x2 >> y2;

        a[i][0] = x1;
        a[i][1] = y1;
        a[i][2] = x2;
        a[i][3] = y2;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) continue;
            int ch = ovp(i, j);
            if(mx < ch){
                mx = ch;
            }
        }
    }

    if(mx == 0){
        cout << "No overlaps";
        return 0;
    }

    cout << "Max overlapping area = " << mx << endl;

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            int ch = ovp(i, j);
            if(mx == ch){
                cout << "rectangles " << i - 1 << " and " << j - 1 << endl;
            }
        }
    }
    
    return 0;
}