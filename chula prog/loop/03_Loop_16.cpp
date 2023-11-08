#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int a, sz, ch;

    cin >> a;

    sz = (a * 2) - 1;

    for(int i = 0; i < a; i++){
        for (int j = 0; j < sz; j++){
            if(j == a - 1 && i == 0){
                cout << "*" << endl;
                break;
            }
            if(i == a - 1){
                cout << "*";
                continue;
            }
            if(j == a + i - 1){
                cout << "*" << endl;
                break;
            }
            if(j == a - i - 1){
                cout << "*";
                continue;;
            }

            cout << ".";
        }
    }

    return 0;
}