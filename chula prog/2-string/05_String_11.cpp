#include <bits/stdc++.h>
using namespace std;

string text;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    while(getline(cin, text)){

        int l = text.length();
        int ch = 0;
        char uni;

         for(int i = 0; i < l; i++){
            if(text[i] >= 'A' && text[i] <= 'Z'){
                continue;
            }
            else if(text[i] >= 'a' && text[i] <= 'z'){
                continue;
            }
            else if(text[i] == ' ' || text[i] == '-' || text[i] == '.'){
                continue;
            }
            else{
                uni = text[i];
                break;
            }
        }

        for(int i = 0; i < l; i++){
            if(text[i] != uni){
                if(ch == 1){
                    cout << text[i];
                }
            }
            else{
                if(ch == 0){
                    ch = 1;
                }
                else{
                    ch = 0;
                }
            }
        }

        cout << endl;
    }

    return 0;
}