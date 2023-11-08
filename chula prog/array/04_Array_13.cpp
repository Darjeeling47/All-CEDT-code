#include <bits/stdc++.h>
using namespace std;

int a[1000];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    int ch = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n - 1; i++){
        if(a[i] > a[i + 1] && a[i] > a[i - 1]){
            ch++;
        }
    }

    cout << ch;

    return 0;
}