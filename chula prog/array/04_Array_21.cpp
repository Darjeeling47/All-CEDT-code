#include <bits/stdc++.h>
using namespace std;

double num[1000];
double sum[1000];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    double a, b, c, d;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    for(int j = 1; j <= n; j++){

        if(j == 1){
            cout << setprecision(10) << num[0] << endl;
            continue;
        }

        for(int i = j - 1; i >= 0; i--){
            if(i == j - 1){
                sum[i] = 1.0 / num[i];
                continue;
            }
            if(i == j - 2){
                sum[i] = num[i] + sum[i + 1];
                continue;
            }

            sum[i] = num[i] + (1.0 / sum[i + 1]);
        }

        cout << setprecision(10) << sum[0] << endl;
        memset(sum, 0, sizeof(sum));
    }

    return 0;
}