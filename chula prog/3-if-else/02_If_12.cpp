#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    double score;

    cin >> score;

    if(score >= 80){
        cout << "A" << endl;
    }
    else if(score >= 70){
        cout << "B" << endl;
    }
    else if(score >= 60){
        cout << "C" << endl;
    }
    else if(score >= 50){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }

    return 0;
}