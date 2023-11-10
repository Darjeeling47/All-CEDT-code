#include <bits/stdc++.h>
using namespace std;

string word;
vector<string> encode;

int srt(int a, int b, int i){

    if(encode[a][i] > encode[b][i]){
        return 1;
    }
    else if(encode[a][i] == encode[b][i]){
        return srt(a, b, i+1);
    }
    else{
        return 2;
    }

}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    cin >> word;
    word += "$";
    int l = word.length();

    for(int i = 0; i < l; i++){
        string tmp = "";
        
        for(int j = 0; j < l; j++){
            tmp += word[(i + j) % l];
        }

        encode.push_back(tmp);
    }

    int v = encode.size();
    int mn = 0;
    auto itr1 = encode.begin();
    auto itr2 = encode.end();
    auto itr3 = encode.begin();

    for(int i = 0; i < v; i++){
        mn = i;

        for(int j = i + 1; j < v; j++){
            if(srt(mn, j, 0) == 1){
                mn = j;
            }
        }

        itr1 = encode.insert(itr1, encode[mn]);
        itr2 = encode.erase(itr3 + mn + 1);
        itr1++;
    }

    for(int i = 0; i < v; i++){
        cout << encode[i][l - 1];
    }

    return 0;
}