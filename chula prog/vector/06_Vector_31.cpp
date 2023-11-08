#include <bits/stdc++.h>
using namespace std;

int a[20][20], ch[20][20];
string bin[] = {"B", "I", "N", "G", "O"};
vector<string> v;

bool ans(int cnt){
    int z = 0;
    int cnta;
    bool chcnt = true;
    for(int i = 0; i < 5; i++){
        cnta = 0;
        for(int j = 0; j < 5; j++){
            cnta += ch[i][j];
        }

        if(cnta == 5){
            z = 1;
            if(chcnt){
                cout << cnt << endl;
                chcnt = false;
            }
            for(int j = 0; j < 5; j++){
                if(a[i][j] == 0){
                    continue;
                }
                if(j == 4){
                    cout << bin[j] << a[i][j] << endl;
                    break;
                }
                cout << bin[j] << a[i][j] << ", ";
            }
            break;
        }
    }

    for(int j = 0; j < 5; j++){
        cnta = 0;
        for(int i = 0; i < 5; i++){
            cnta += ch[i][j];
        }

        if(cnta == 5){
            z = 1;
            if(chcnt){
                cout << cnt << endl;
                chcnt = false;
            }
            for(int i = 0; i < 5; i++){
                if(a[i][j] == 0){
                    continue;
                }
                if(i == 4){
                    cout << bin[j] << a[i][j] << endl;
                    break;
                }
                cout << bin[j] << a[i][j] << ", ";
            }
            break;
        }
    }

    cnta = 0;
    for(int i = 0; i < 5; i++){
        cnta += ch[i][i];
    }
    if(cnta == 5){
        z = 1;
        if(chcnt){
                cout << cnt << endl;
                chcnt = false;
            }
        for(int i = 0; i < 5; i++){
            if(a[i][i] == 0){
                continue;
            }
            if(i == 4){
                cout << bin[i] << a[i][i] << endl;
                break;
            }
            cout << bin[i] << a[i][i] << ", ";
        }
    }

    cnta = 0;
    for(int i = 0; i < 5; i++){
        cnta += ch[4 - i][i];
    }
    if(cnta == 5){
        z = 1;
        if(chcnt){
                cout << cnt << endl;
                chcnt = false;
            }
        for(int i = 0; i < 5; i++){
            if(a[i][i] == 0){
                continue;
            }
            if(i == 4){
                cout << bin[i] << a[4 - i][i] << endl;
                break;

            }
            cout << bin[i] << a[4 - i][i] << ", ";
        }
    }

    if(z == 1){
        return true;
    }
    else{ 
        return false;
    }
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    for(int i = 0; i < 5; i++){
        char b;
        cin >> b;
    }

    string n;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> n;
            if(n == "*"){
                ch[i][j] = 1;
                a[i][j] = 0;
                continue;
            }
            a[i][j] = stoi(n);
        }
    }

    string b, c;
    int tmp;
    int cnt = 0;
    while(cin >> b){
        cnt++;
        v.push_back(b);
        c = b.substr(1);
        tmp = stoi(c);
        c = b.substr(0, 1);

        for(int j = 0; j < 5; j++){
            if(c == bin[j]){
                //cout << c << " " << tmp << endl;
                for(int i = 0; i < 5; i++){
                    if(a[i][j] == tmp){
                        //cout << "YES" << endl;
                        ch[i][j] = 1;
                    }
                }
                continue;
            }
        }

        if(ans(cnt)){
            return 0;
        }
    }

    return 0;
}