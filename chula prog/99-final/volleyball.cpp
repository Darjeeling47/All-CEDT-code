#include <bits/stdc++.h>
using namespace std;

vector<int> n1, n2;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;

    while(n--){
        string na1, na2, sc;
        int ns1 = 0, ns2 = 0;
        cin >> na1 >> na2;
        
        n1.clear();
        n2.clear();

        while(cin >> sc){
            if(sc == "*") break;
            sc += "*";

            string tmp1;
            int score1, score2;
            for(int i = 0; i < sc.length(); i++){
                if(sc[i] == '-'){
                    score1 = stoi(tmp1);
                    n1.push_back(score1);
                    tmp1 = "";
                }
                else if(sc[i] == '*'){
                    score2 = stoi(tmp1);
                    n2.push_back(score2);
                    tmp1 = "";
                }
                else{
                    tmp1 += sc[i];
                }
            }

            if(score1 > score2) ns1++;
            else if(score1 < score2) ns2++;
        }

        if(ns1 > ns2){
            cout << "*" << na1 << " " << ns1;
            cout << " [ ";
            for(auto & e : n1){
                cout << e << " ";
            }
            cout << "]" << endl;

            cout << na2 << " " << ns2;
            cout << " [ ";
            for(auto & e : n2){
                cout << e << " ";
            }
            cout << "]" << endl;
        }
        else{
            cout << na1 << " " << ns1;
            cout << " [ ";
            for(auto & e : n1){
                cout << e << " ";
            }
            cout << "]" << endl;

            cout << "*" << na2 << " " << ns2;
            cout << " [ ";
            for(auto & e : n2){
                cout << e << " ";
            }
            cout << "]" << endl;
        }
    }

    return 0;
}