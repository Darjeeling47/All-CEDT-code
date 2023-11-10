#include <bits/stdc++.h>
using namespace std;

long long fnd(long long x, long long l){

    long long sum = 0;

    for(int i = 1; i <= l - 1; i++){
        sum += (9 * (long long)pow(10, i - 1)) * i;
        //cout << i << " " << sum << endl;
    }

    sum += (x - (long long)pow(10, l - 1) + 1) * l;
    //cout << l << " " << sum << endl;

    return sum;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    long long num1, num2, l1, l2;
    long long sum = 0;
    string n1, n2;

    cin >> num1 >> num2;

    n1 = to_string(num1--);
    n2 = to_string(num2);
    l1 = n1.length();
    l2 = n2.length();

    sum = fnd(num2, l2);
    sum -= fnd(num1, l1);

    cout << sum << endl;

    return 0;
}