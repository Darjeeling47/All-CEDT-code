#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a = "01,02,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,51,53,55,58";
    string b;
    
    cin >> b;
    
    if(a.find(b) != string::npos && b.size() == 2){
        cout << "OK" << endl;
    }
    else{
        cout << "Error" << endl;
    }

    return 0;
}