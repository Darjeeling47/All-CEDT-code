#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string a, start;

    cin >> a;

    start = a.substr(0, 2);  

    if(a.length() != 10){
        cout << "Not a mobile number";
        return 0;
    }

    if(start != "06" && start != "08" && start != "09"){
        cout << "Not a mobile number";
        return 0;
    }

    cout << "Mobile number";

    return 0;
}