#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

string pass[100];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int k = 0;
    cin >> pass[k];
    int ln = pass[k].length();
    while(ln != 0){
        k++;
        cin >> pass[k];
        ln = pass[k].length();
    };

    for(int j = 0; j < k; j++){

        int l = pass[j].length();
        bool status = true;
        bool big = false;
        bool small = false;
        bool num = false;
        bool len = false;
        bool ch = false;

        if(l >= 12){
            len = true;
        }
        else if(l >= 8){
            len = false;
        }
        else{
            status = false;
        }

        for(int i = 0; i < l; i++){

            if((pass[j][i] < 'A' || pass[j][i] > 'Z') && (pass[j][i] < 'a' || pass[j][i] > 'z') && (pass[j][i] < '0' || pass[j][i] > '9')){
                ch = true;
            }
            else if(pass[j][i] >= 'A' && pass[j][i] <= 'Z'){
                big = true;
            }
            else if(pass[j][i] >= 'a' && pass[j][i] <= 'z'){
                small = true;
            }
            else if(pass[j][i] >= '0' && pass[j][i] <= '9'){
                num = true;
            }

        }

        if(status && big && small && num){
            if(len && ch){
                cout << ">> strong" << endl;
            }
            else{
                cout << ">> weak" << endl;
            }
        }
        else{
            cout << ">> invalid" << endl;
        }
    }

    return 0;
}