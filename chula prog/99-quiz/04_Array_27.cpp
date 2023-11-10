#include <bits/stdc++.h>
using namespace std;

int a[10000], b[10000];
string word;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, mx, mn;
    mx = -1000000;
    mn = 1000000;

    cin >> n;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cin >> a[i] >> b[i];
        }
        else {
            cin >> b[i] >> a[i];
        }
    }

    cin >> word;

    if(word == "Zig-Zag"){
        for(int i = 0; i < n; i++){
            if(mn > a[i]){
                mn = a[i];
            }
            if(mx < b[i]){
                mx = b[i];
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(mx < a[i]){
                mx = a[i];
            }
            if(mn > b[i]){
                mn = b[i];
            }
        }
    }

    cout << mn << " " << mx << endl;

    return 0;
}