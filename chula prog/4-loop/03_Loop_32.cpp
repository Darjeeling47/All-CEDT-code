#include <bits/stdc++.h>
using namespace std;

string ord;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        
        getline(cin, ord);
        int l = ord.length();
        bool f = true;
        int ch = 0;

        if(ord[0] != 'R'){
            cout << "WRONG_INPUT" << endl;
            continue;
        }
        if(ord[2] == 'R'){
            cout << "WRONG_INPUT" << endl;
            continue;
        }

        for(int i = 2; i < l; i+=2){

            int g = i - 2;

            if(ord[i] == 'Y'){
                if(ord[g] != 'R'){
                    if(ord[g - 2] == 'R' && g >= 2){
                        continue;
                    }
                    f = false;
                    break;
                }
                ch++;
            }
            if(ord[i] == 'G'){
                if(ord[g] != 'R' && ord[g] != 'Y'){
                    f = false;
                    break;
                }
                ch++;
            }
            if(ord[i] == 'N'){
                if(ord[g] != 'R' && ord[g] != 'G'){
                    f = false;
                    break;
                }
                ch++;
            }
            if(ord[i] == 'B'){
                if(ord[g] != 'R' && ord[g] != 'N'){
                    f = false;
                    break;
                }
                ch++;
            }
            if(ord[i] == 'P'){
                if(ord[g] != 'R' && ord[g] != 'B'){
                    f = false;
                    break;
                }
                ch++;
            }
            if(ord[i] == 'K'){
                if(ord[g] != 'R' && ord[g] != 'P'){
                    f = false;
                    break;
                }
                ch++;
            }
            if(ord[i] == 'R'){
                if(ord[g] == 'R'){
                    f = false;
                    break;
                }
                ch--;
            }
            if(i == l - 1){
                break;
            }
            if(ch >= 2){
                f = false;
                break;
            }
        }

        if(f){
            int sco = 0;
            for(int i = 0; i < l; i++){
                if(ord[i] == 'R'){
                    sco += 1;
                }
                if(ord[i] == 'Y'){
                    sco += 2;
                }
                if(ord[i] == 'G'){
                    sco += 3;
                }
                if(ord[i] == 'N'){
                    sco += 4;
                }
                if(ord[i] == 'B'){
                    sco += 5;
                }
                if(ord[i] == 'P'){
                    sco += 6;
                }
                if(ord[i] == 'K'){
                    sco += 7;
                }
            }

            cout << sco << endl;
        }
        else{
            cout << "WRONG_INPUT" << endl;
        }
    }

    return 0;
}