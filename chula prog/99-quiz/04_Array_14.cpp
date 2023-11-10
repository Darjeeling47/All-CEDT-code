#include <bits/stdc++.h>
using namespace std;

double a[100][100], b[100][100];

double fnd_avg(int x, int y) {
    double sum = 0;
    
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            sum += a[x + i][y + j];
        }
    }

    sum /= 9;
    return round(sum*100)/100.0;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < m - 1; j++){
            cout << fnd_avg(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}