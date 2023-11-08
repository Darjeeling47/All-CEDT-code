#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int a;
    cin >> a;

    if(a == 0){
        cout << "zero" << endl;
    }
    else if(a > 0){
        cout << "positive" << endl;
    }
    else if(a < 0){
        cout << "negative" << endl;
    }

    if(a % 2 == 0){
        cout << "even" << endl;
    }
    else{
        cout << "odd" << endl;
    }

    return 0;
}