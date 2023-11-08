#include <bits/stdc++.h>
using namespace std;

set<int> num, uni, its, del, f_num, its_s;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    string w, a;

    getline(cin, w);
    for(int i = 0; i < w.length(); i++){
        if(w[i] == ' '){
            //cout << stoi(a) << " ";
            f_num.insert(stoi(a));
            uni.insert(stoi(a));
            its.insert(stoi(a));
            del.insert(stoi(a));
            a = "";
            continue;
        }
        else if(i == w.length() - 1){
            a += w[i];
            //cout << stoi(a) << " ";
            f_num.insert(stoi(a));
            uni.insert(stoi(a));
            its.insert(stoi(a));
            del.insert(stoi(a));
            a = "";
            continue;
        }
        else{
            a += w[i];
        }
    }

    while(getline(cin, w)){
        num.clear();

        for(int i = 0; i < w.length(); i++){
            if(w[i] == ' '){
                //cout << stoi(a) << " ";
                num.insert(stoi(a));
                a = "";
                continue;
            }
            else if(i == w.length() - 1){
                a += w[i];
                //cout << stoi(a) << " ";
                num.insert(stoi(a));
                a = "";
                continue;
            }
            else{
                a += w[i];
            }
        }
        cout << endl;

        for(auto & e : num){
            uni.insert(e);
        }

        its_s.clear();
        its_s = its;
        its.clear();
        for(auto & e : num){
            if(its_s.find(e) != its_s.end()) its.insert(e);
        }

        for(auto & e : num){
            if(f_num.find(e) != f_num.end()) f_num.erase(e);
        }
        del = f_num;
    }

    cout << "U: ";
    if(uni.empty()){
        cout << "empty set";
    }
    else{
        for(auto e : uni) cout << e << " ";
    }
    cout << endl;

    cout << "I: ";
    if(its.empty()){
        cout << "empty set";
    }
    else{
        for(auto e : its) cout << e << " ";
    }
    cout << endl;

    cout << "D: ";
    if(del.empty()){
        cout << "empty set";
    }
    else{
        for(auto e : del) cout << e << " ";
    }
    cout << endl;


    return 0;
}