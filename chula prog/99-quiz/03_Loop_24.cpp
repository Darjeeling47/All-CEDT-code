#include <bits/stdc++.h>
using namespace std;

string a;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    cin >> a;
    int l = a.length();
    int ch = 0;
    char temp;

    for(int i = 0; i < l; i++){
        if(i == 0){
            cout << a[i];
            temp = a[i];
            ch = 1;
            continue;
        }
        
        if(a[i] == temp){
            ch++;
        }

        if(a[i] != temp){
            cout << " " << ch << " " << a[i];
            ch = 1;
            temp = a[i];
        }
    }

    cout << " " << ch << endl;

    return 0;
}