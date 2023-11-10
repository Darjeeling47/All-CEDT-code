#include <bits/stdc++.h>
using namespace std;

string name[] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
string nkname[] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
string nm;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    while(n--){
        int ch = 0;
        cin >> nm;
        for(int i = 0; i < 10; i++){
            if(nm == name[i]){
                cout << nkname[i] << endl;
                ch++;
            }
            else if(nm == nkname[i]){
                cout << name[i] << endl;
                ch++;
            }
        }
    if(ch == 0)
        cout << "Not found" << endl;

    }

    return 0;
}