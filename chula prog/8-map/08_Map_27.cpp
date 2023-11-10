#include <bits/stdc++.h>
using namespace std;

string word;

map<int, vector<string>> phone;

void inmap() {
    phone[0] = {" "};
    phone[2] = {"a", "b", "c"};
    phone[3] = {"d", "e", "f"};
    phone[4] = {"g", "h", "i"};
    phone[5] = {"j", "k", "l"};
    phone[6] = {"m", "n", "o"};
    phone[7] = {"p", "q", "r", "s"};
    phone[8] = {"t", "u", "v"};
    phone[9] = {"w", "x", "y", "z"};
}

void K2T(string word) {

    int l = word.length();
    int cnt = 1, tmp = word[0] - '0';
    cout << ">> ";

    for(int i = 1; i < l; i++){
        //cout << ">>" << tmp << " >>" << cnt << endl;
        if(word[i] == ' '){
            cout << phone[tmp][cnt - 1];
            cnt = 0;
        }
        else if(word[i] == '0'){
            cout << " ";
            tmp = 0;
            i++;
        }
        else{
            tmp = word[i] - '0';
            cnt++;
        }
    }

    cout << phone[tmp][cnt - 1] << endl;
}

void T2K(string word) {
    int l = word.length();
    cout << ">> ";
    for(int n = 0; n < l; n++){
        if(word[n] == ' '){
            cout << "0 ";
            continue;
        }

        if(word[n] < 'a' || word[n] > 'z') continue;

        for(int i = 0; i < 10; i++){
            if(i == 1) continue;

            for(int j = 0; j < phone[i].size(); j++){
                //cout << phone[i][j][0] << " " << word[i] << endl;

                if(word[n] == phone[i][j][0]){
                    for(int k = 0; k <= j; k++){
                        cout << i;
                    }
                    cout << " ";
                    break;
                }
            }
        }
    }
    cout << endl;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    inmap();

    string con;
    while(cin >> con){

        cin.ignore();
        getline(cin, word);

        if(con == "T2K"){
            int l = word.length();
            for(int i = 0; i < l; i++){
                if(word[i] == ' ') continue;
                if(word[i] < 'a') word[i] += 32;
            }

            T2K(word);
        }
        else{
            K2T(word);
        }
    }

    return 0;
}