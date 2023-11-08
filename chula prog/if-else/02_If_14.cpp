#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string id_a, id_b;
    bool sta_a = true, sta_b = true;
    double gp_a, gp_b;
    char com_a, com_b, cal1_a, cal1_b, cal2_a, cal2_b;

    cin >> id_a >> gp_a >> com_a >> cal1_a >> cal2_a;
    cin >> id_b >> gp_b >> com_b >> cal1_b >> cal2_b;

    if(com_a > 'A'){
        sta_a = false;
    }
    if(com_b > 'A'){
        sta_b = false;
    }
    if(cal1_a > 'C'){
        sta_a = false;
    }
    if(cal1_b > 'C'){
        sta_b = false;
    }
    if(cal2_a > 'C'){
        sta_a = false;
    }
    if(cal2_b > 'C'){
        sta_b = false;
    }

    if(sta_a == false && sta_b == false){
        cout << "None";
        return 0;
    }
    else if(sta_a == true && sta_b == false){
        cout << id_a;
        return 0;
    }
    else if(sta_a == false && sta_b == true){
        cout << id_b;
        return 0;
    }
    
    if(gp_a > gp_b){
        cout << id_a;
        return 0;
    }
    else if(gp_a < gp_b){
        cout << id_b;
        return 0;
    }

    if(cal1_a < cal1_b){
        cout << id_a;
        return 0;
    }
    else if(cal1_a > cal1_b){
        cout << id_b;
        return 0;
    }

    if(cal2_a < cal2_b){
        cout << id_a;
        return 0;
    }
    else if(cal2_a > cal2_b){
        cout << id_b;
        return 0;
    }

    cout << "Both";

}