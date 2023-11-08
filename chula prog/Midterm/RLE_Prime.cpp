#include <bits/stdc++.h>
using namespace std;

string num;

bool prime(string n){
    int l = n.length();

    unsigned long long nm = 0;
    for(int i = 0; i < l; i++){
        nm = (nm * 10) + (n[i] - '0');
    }
    
    for(long long i = 3; i < sqrt(nm); i+=2){
        if(nm % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int j;
    cin >> j;

    while(j--){
        num = "";
        int a, n, b, m;
        cin >> a >> n >> b >> m;

        if(b % 2 == 0 && n != 0){
            cout << "NO" << endl;;
            continue;
        }
        else if(n == 0 && b == 2){
            cout << "YES" << endl;
            continue;
        }
        else if(n % 2 == 0 && m % 2 == 0){
            cout << "NO" << endl;
            continue;
        }

        while(n--){
            num += a + '0';
        }
        while(m--){
            num += b + '0';
        }

        if(prime(num)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}