#include <bits/stdc++.h>
using namespace std;

int a[10000], b[100][100];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, m, tmp, wi;
    int ch = 0;;

    cin >> n;
    m = pow(n, 2);
    tmp = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];

            if(b[i][j] == 0){
                wi = i;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            int c = i * n + j - tmp;
            //cout << c << " ";
            a[c] = b[i][j];

            if(b[i][j] == 0){
                tmp = 1;
            }
        }
    }
    //cout << endl;

    // for(int i = 0; i < m - 1; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    for(int i = 0; i < m - 1; i++){
        tmp = a[i];

        for(int j = i + 1; j < m - 1; j++){
            if(tmp > a[j]){
                ch++;
            }
        }
    }

    //cout << "ch : " << ch << endl;
    //cout << "wi : " << wi << endl;

    if(n % 2 != 0){
        if(ch % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        if(ch % 2 == 0){
            if(wi % 2 != 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            if(wi % 2 == 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}