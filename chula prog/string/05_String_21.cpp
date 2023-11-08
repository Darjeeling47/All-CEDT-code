#include <bits/stdc++.h>
using namespace std;

string text;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    cin >> text;

    int l = text.length();
    int ch = 0;

    if(text[0] >= '0' && text[0] <= '9'){
        ch = 1;
    }

    cout << text[0];

    for(int i = 1; i < l; i++){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            cout << ", " << text[i];
            ch = 0;
        }
        else if(text[i] >= 'a' && text[i] <='z'){
            if(ch == 0){
                cout << text[i];
            }
            else {
                cout << ", " << text[i];
            }
            ch = 0;
        }
        else{
            if(ch == 1){
                cout << text[i];
            }
            else {
                cout << ", " << text[i];
            }
            ch = 1;
        }
    }

    return 0;
}