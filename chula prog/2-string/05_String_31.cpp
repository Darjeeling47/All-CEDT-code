#include <bits/stdc++.h>
using namespace std;

string code, word, ans;
string coder[15] = {"UUUU", "UUUL", "UULU", "UULL", "ULUU", "ULUL", "ULLU", "ULLL", "LUUU", "LUUL", "LULU", "LULL"};

void d() {
    int l = word.length();

    if(l % 4 != 0){
        int i = l % 4;
        i = 4 - i;

        for(int j = 0; j < i; j++) {
            word += word[j];
        }
    }

    for(int i = 0; i < l; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            ans += 'U';
        }
        else if(word[i] >= 'a' && word[i] <= 'z'){
            ans += 'L';
        }
        else{
            continue;
        }
    }

    l = ans.length();

    for(int i = 0; i <= l - 3; i+=4){
        string ch = ans.substr(i, 4);

        for(int j = 0; j <= 11; j++){
            if(ch == coder[j]){
                if(j == 10){
                    cout << "-";
                }
                else if(j == 11){
                    cout << ",";
                }
                else{
                    cout << j;
                }
                break;
            }
        }
    }
}

void e() {
    int l = word.length();

    for(int i = 0; i < l; i++){
        int j = word[i] - '0';

        if(word[i] == '-'){ 
            j = 10;
        }
        else if(word[i] == ','){
            j = 11;
        }

        ans += coder[j];
    }

    l = ans.length();
    int len = code.length();
    int j = 0;

    for(int i = 0; i < l; i++){
        j %= len;
        
        if(code[j] >= 'a' && code[j] <= 'z'){
            if(ans[i] == 'U'){
                cout << (char)(code[j] - 32);
            }
            else{
                cout << code[j];
            }
        }
        else{
            cout << code[j];
            i--;
        }

        j++;
    }
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    getline(cin, code);

    int len = code.length();
    for(int i = 0; i < len; i++){
        if(code[i] >= 'A' && code[i] <= 'Z'){
            code[i] += 32;
        }
    }

    char func;
    
    while(cin >> func){
        cin.ignore();
        getline(cin, word);
        
        ans.clear();

        if(func == 'D'){
            d();
        }
        else{
            e();
        }

        cout << endl;
    }

    return 0;
}