#include <bits/stdc++.h>
using namespace std;

string word, word_fnt, word_end;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    getline(cin, word);

    int l = word.length();
    int ch = 0;
    int start, st_ed, end;
    bool status = false;

    for(int i = 0; i < l; i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            if(ch == 0){
                start = i;
                ch++;
            }
            status = true;
        }
        if(word[i] == 32){
            status = false;
            st_ed = i;
            break;
        }
        if(status){
            word_fnt += word[i];
        }
    }

    for(int i = l - 1; i >= 0; i--){
        if(word[i] == 32){
            end = i + 1;
            break;
        }
    }

    ch = 0;
    for(int i = end; i < l; i++){
        char tmp = word[i];
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            if(ch == 0){
                end = i;
                ch++;
            }
            status = true;
        }
        if(status){
            word_end += word[i];
        }
    }

    for(int i = 0; i < start; i++){
        cout << word[i];
    }

    cout << word_end;

    for(int i = st_ed; i < end; i++){
        cout << word[i];
    }

    cout << word_fnt;

    return 0;
}