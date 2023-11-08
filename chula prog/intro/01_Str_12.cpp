// DateConverter

#include <iostream>
using namespace std;

const int MaxN = 10e8;
string date;
string month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    cin >> date;

    int a1 = date[0];
    int a2 = date[1];
    int b1 = date[3];
    int b2 = date[4];
    int c1 = date[6];
    int c2 = date[7];
    int c3 = date[8];
    int c4 = date[9];

    int suma = ((int)a1 - 48) * 10 + ((int)a2 - 48);
    int sumb = ((int)b1 - 48) * 10 + ((int)b2 - 48) - 1;
    int sumc = ((int)c1 - 48) * 1000 + ((int)c2 - 48) * 100 + ((int)c3 - 48) * 10 + ((int)c4 - 48) - 543;

    cout << month[sumb] << " " << suma << ", " << sumc;

    return 0;
}