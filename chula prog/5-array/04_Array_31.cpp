#include <bits/stdc++.h>
using namespace std;

string num;
string num1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string num2[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string num3[] = {"tmp", "tmp", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string num4[] = {"hundred", "thousand", "million", "billion", "trillion"};

int l, r = 0, ch = 0;

void small(){
    int l1 = (l - r) % 3;

    if(l1 == 0){
        int i = num[r] - '0';

        if(i != 0){
            cout << num1[i] << " " << num4[0] << " ";
            ch = 1;
        }

        l1 = 2;
        r++;
    }
    if(l1 == 2){
        int i = num[r] - '0';
        
        if(i == 1){
            r++;
            i = num[r] - '0';
            cout << num2[i] << " "; 
            ch = 1;

            r++;
            return;
        }
        if(i != 0){
            cout << num3[i] << " ";
            ch = 1;
        }

        r++;
        l1 = 1;
    }
    if(l1 == 1){
        int i = num[r] - '0';

        if(i != 0){
            cout << num1[i] << " ";
            ch = 1;
        }
        r++; 
    }

    return;
}

void big(){
    if(l - r == 12 && ch == 1){
        cout << num4[4] << " ";
        ch = 0;
    }
    if(l - r == 9 && ch == 1){
        cout << num4[3] << " ";
        ch = 0;
    }
    if(l - r == 6 && ch == 1){
        cout << num4[2] << " ";
        ch = 0;
    }
    if(l - r == 3 && ch == 1){
        cout << num4[1] << " ";
        ch = 0;
    }
}

int main() {

    cin.tie(NULL) -> sync_with_stdio(false);

    getline(cin, num);

    l = num.length();

    while(r < l){
        small();
        big();
    }

    if(l == 1 && num[0] - '0' == 0){
        cout << num1[0];
    }

    return 0;
}

