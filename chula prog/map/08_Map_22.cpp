#include <bits/stdc++.h>
using namespace std;

map<string, double> m;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    while(n--){
        string a;
        double b;
        cin >> a >> b;
        m[a] = b;
    }
    m["THB"] = 1.0;

    string a, b, d;
    bool c = true, e = true;
    double z;
    int y;
    cin.ignore();
    getline(cin, a);
    a += " ";

    for(int i = 0; i < a.length(); i++){
        if(a[i] == ' ' && c){
            c = false;
            z = stoi(b);
            b = "";
        }
        else if(a[i] == ' ' && e){
            if(b != "THB") z *= m[b];
            z = (int)((double)z / m[b]);
            y = z;
            d = b;
            b = "";
            if(i == a.length() - 1) cout << y << " " << d;
            else cout << y << " " << d << " -> ";
            e = false;
        }
        else if(a[i] == ' '){
            z = (int)((double)z * m[d] / m[b]);
            y = z;
            d = b;
            b = "";
            if(i == a.length() - 1) cout << y << " " << d;
            else cout << y << " " << d << " -> ";
        }
        else{
            b += a[i];
        }
    }

    return 0;
}