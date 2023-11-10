#include <bits/stdc++.h>
using namespace std;

int a[100], ch[100];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, mx1, mx2, ck;
    mx1 = 1;
    mx2 = 1;
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(j == n - 1 && a[j] < a[i] && mx1 < a[i]){
                ck = 1;
                break;
            }
            if(a[j] >= a[i]){
                if(mx1 < a[j]){
                    mx1 = a[j];
                }
            }
        }
        for(int j = i - 1; j >= 0; j--){
            if(j == 0 && a[j] < a[i] && mx2 < a[i]){
                ck = 1;
                break;
            }
            if(a[j] >= a[i]){
                if(mx2 < a[j]){
                    mx2 = a[j];
                }
            }
        }

        //cout << i << " : " << mx1 << " " << mx2 << " " << ck << " " << sum << endl;

        if(ck == 1){
            mx1 = 1;
            mx2 = 1;
            ck = 0;
            continue;
        }

        if(mx1 >= mx2){
            sum += mx2 - a[i];
        }
        else{
            sum += mx1 - a[i];
        }

        mx1 = 1;
        mx2 = 1;
    }

    cout << sum << endl;
 
    return 0;
}