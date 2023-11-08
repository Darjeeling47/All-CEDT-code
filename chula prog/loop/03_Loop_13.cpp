#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

string foc, para;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    bool fnd = true;
    
    getline(cin, foc);
    getline(cin, para);
    
    int ch = 0;
    int i = 0;
    int j, k, l;

    l = foc.length();
    fnd = true;
    while(fnd){
        i = para.find(foc, i);
        
        j = i - 1;
        k = i + l;
        i++;
        ch++;

        if((para[j] >= 65 && para[j] <=90) || (para[j] >= 97 && para[j] <= 122)){
            ch--;
        }
        else if((para[k] >= 65 && para[k] <=90) || (para[k] >= 97 && para[k] <= 122)){
            ch--;
        }

        if(para.find(foc, i) == string::npos){
            fnd = false;
            break;
        }
    }

    cout << ch << endl;

    return 0;
}

/*
the
The word "the" is one of the most common words in English. thee. ethe
*/