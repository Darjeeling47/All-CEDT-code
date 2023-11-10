#include <bits/stdc++.h>
using namespace std;

string grade;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    double c, sum_g, sum_c;
    sum_g = 0;
    sum_c = 0;

    while(n--){
        cin >> grade >> c;

        if(grade == "A") sum_g += 4.0 * c, sum_c += c;
        else if(grade == "B+") sum_g += 3.5 * c, sum_c += c;
        else if(grade == "B") sum_g += 3.0 * c, sum_c += c;
        else if(grade == "C+") sum_g += 2.5 * c, sum_c += c;
        else if(grade == "C") sum_g += 2.0 * c, sum_c += c;
        else if(grade == "D+") sum_g += 1.5 * c, sum_c += c;
        else if(grade == "D") sum_g += 1.0 * c, sum_c += c;
        else if(grade == "F") sum_c += c;
    }

    sum_g = sum_g / sum_c;
    cout << round(sum_g * 100) / 100;

    return 0;
}