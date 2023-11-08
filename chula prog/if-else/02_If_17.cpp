#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int w;

    cin >> w;

    if(w <= 100){
        cout << "18";
    }   
    else if(w <= 250){
        cout << "22";
    }
    else if(w <= 500){
        cout << "28";
    }
    else if(w <= 1000){
        cout << "38";
    }
    else if(w <= 2000){
        cout << "58";
    }
    else{
        cout << "Reject";
    }

    return 0;
}