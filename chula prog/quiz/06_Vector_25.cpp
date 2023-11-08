#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int>> m;

int grade(string a){
    if(a == "A") return 0;
    else if(a == "B+") return 1;
    else if(a == "B") return 2;
    else if(a == "C+") return 3;
    else if(a == "C") return 4;
    else if(a == "D+") return 5;
    else if(a == "D") return 6;
    else return 7;
}

string grade2(int a){
    if(a == 0) return "A";
    else if(a == 1) return "B+";
    else if(a == 2) return "B";
    else if(a == 3) return "C+";
    else if(a == 4) return "C";
    else if(a == 5) return "D+";
    else if(a == 6) return "D";
    else return "F";
}

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string n, g;
    while(cin >> n && n != "q"){
        cin >> g;
        m.push_back({n , grade(g)});
    }   

    while(cin >> n){
        for(auto & e : m){
            if(e.first == n && e.second > 0){
                e.second--;
            }
        }
    }

    for(auto & e : m){
        cout << e.first << " " << grade2(e.second) << endl;
    }

    return 0;
}