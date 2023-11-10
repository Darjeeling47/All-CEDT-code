#include <bits/stdc++.h>
using namespace std;

string s;
int a[12];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int l, mx = -1;

    getline(cin, s);

    l = s.length();

    for(int i = 0; i < l; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            int j = s[i] - '0';
            a[j] = 1;
        }
    }

    for(int i = 0; i < 10; i++){
        if(a[i] == 0){
            mx = i;
        }
    }

    if(mx == -1){
        cout << "None";
        return 0;
    }

    for(int i = 0; i < 10; i++){
        if(a[i] == 0){
            cout << i;
            if(i != mx){
                cout << ",";
            }
        }
    }

    return 0;
}