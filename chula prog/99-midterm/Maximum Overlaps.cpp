#include <bits/stdc++.h>
using namespace std;

int a[10000][10000];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;

        for(int j = start; j < end; j++){
            a[i][j] = 1;
        }
    }

    int mx = 0;
    for(int i = 1; i <= 1440; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[j][i];
        }
        if(sum > mx){
            mx = sum;
        }
    }

    cout << mx;

    return 0;
}