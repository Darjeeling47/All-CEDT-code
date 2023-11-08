#include <bits/stdc++.h>
using namespace std;

string word;
int a[1000];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    getline(cin, word);

    int l = word.length();

    for(int i = 0; i < l; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            a[word[i] - 'A'] += 1;
        }
        if(word[i] >= 'a' && word[i] <= 'z'){
            a[word[i] - 'a'] += 1;
        }
    }

    for(int i = 0; i < 26; i++){
        if(a[i] != 0)
            cout << (char)(i + 'a') << " -> " << a[i] << endl;
    }

    return 0;
}