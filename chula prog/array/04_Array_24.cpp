#include <bits/stdc++.h>
using namespace std;

int a[100];
int n, n1;

int swp(int x){
    int mid = x / 2;

    if(x == 1){
        return 0;
    }

    for(int i = 1; i <= mid; i++){
        int tmp;
        tmp = a[i];
        a[i] = a[x - i + 1];
        a[x - i + 1] = tmp;
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}

int fnd_lg(int x){
    int mx = 0, index = 0;

    for(int i = 1; i <= x; i++){
        if(a[i] > mx){
            mx = a[i];
            index = i;
        }
    }

    if(index == x){
        return 0;
    }

    return index;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    cin >> n;
    n1 = n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    while(n1 != 1){
        int id = fnd_lg(n1);

        if(id == 0){
            n1--;
            continue;
        }

        swp(id);
        swp(n1);
        n1--;
    }

    return 0;
}