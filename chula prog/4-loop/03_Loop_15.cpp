#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;
string a;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int ch = 0;

    getline(cin, a);

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '['){
            a[i] = '(';
            ch++;
        }
        else if(a[i] == ']'){
            a[i] = ')';
            ch++;
        }
        else if(a[i] == '('){
            a[i] = '[';
            ch++;
        }
        else if(a[i] == ')'){
            a[i] = ']';
            ch++;
        }
    }

    cout << a << endl;

    return 0;
}