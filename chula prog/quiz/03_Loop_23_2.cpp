#include <bits/stdc++.h>
using namespace std;

string a, b;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int k;

    cin >> a >> k;
    int l = a.length();
    int ch = 0;
    char temp;

    for(int i = 0; i < l; i++){
        if(i == 0){
            temp = a[i];
            ch = 1;
            continue;
        }
        
        if(a[i] == temp){
            ch++;
        }

        if(a[i] != temp){
            if(ch < k){
                while(ch--){
                    cout << temp;
                }
            }

            ch = 1;
            temp = a[i];
        }
    }

    if(ch < k){
        while(ch--){
            cout << temp;
        }
    }

    return 0;
}