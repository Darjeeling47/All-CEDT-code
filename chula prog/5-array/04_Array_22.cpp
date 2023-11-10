#include <bits/stdc++.h>
using namespace std;

string card1[1000], card2[1000], cardall[1000], cmd;

int mid, n;

void half(){
    for(int i = 0; i < mid; i++){
        card1[i] = cardall[i];
    }
    for(int i = mid; i < n; i++){
        card2[i - mid] = cardall[i];
    }
    memset(cardall, 0, sizeof(cardall));
}

void S(){
    for(int i = 0, j = 0; i < mid; i++, j+=2){
        cardall[j] += card1[i];
        cardall[j+1] += card2[i];
    }
    memset(card1, 0, sizeof(card1));
    memset(card2, 0, sizeof(card2));
}

void C(){
    for(int i = 0; i < mid; i++){
        cardall[i] += card2[i];
    }
    for(int i = 0; i < mid; i++){
        cardall[i + mid] += card1[i];
    }
    memset(card1, 0, sizeof(card1));
    memset(card2, 0, sizeof(card2));
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int l;

    cin >> n;
    mid = n / 2;

    for(int i = 0; i < n; i++){
        cin >> cardall[i];
    }

    cin.ignore();
    getline(cin, cmd);

    l = cmd.length();

    for(int i = 0; i < l; i++){
        if(cmd[i] == 'C'){
            half();
            C();
        }
        if(cmd[i] == 'S'){
            half();
            S();
        }
    }

    for(int i = 0; i < n; i++){
        cout << cardall[i] << " ";
    }

    return 0;
}