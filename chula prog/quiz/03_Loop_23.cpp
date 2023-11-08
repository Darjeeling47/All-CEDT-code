#include <bits/stdc++.h>
using namespace std;

string word;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int k, l, start, end, ch;
    char temp;

    cin >> word >> k;

    l = word.length();
    temp = word[0];
    start = 0;

    for(int i = 1; i < l; i++){
        if(temp != word[i]){
            end = i;
            ch = end - start;

            if(ch >= k){
                for(int j = start; j < end; j++){
                    word[j] = '0';
                }
            }

            start = end;
            temp = word[i];
        }
        if(i == l - 1){
            end = i;
            ch = end - start + 1;

            if(ch >= k){
                for(int j = start; j <= end; j++){
                    word[j] = '0';
                }
            }
        }
    }   

    for(int i = 0; i < l; i++){
        if(word[i] != '0'){
            cout << word[i];
        }
    }

    return 0;
}