#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> m1, m2;
vector<string> v, v1, nm, out;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        v.clear();
        v1.clear();

        string a, id = "", b = "";
        bool fst = true;

        getline(cin, a);

        for(int i = 0; i < a.length(); i++){
            if(a[i] == '*'){
                break;
            }
            else if(a[i] == ' ' && fst){
                fst = false;
                nm.push_back(id);
                //cout << "- id : " << id << endl;
            }
            else if(fst){
                id += a[i];
            }
            else if(a[i] == ' '){
                v1 = m2[id];
                v = m1[b];
                
                v1.push_back(b);
                v.push_back(id);

                m2[id] = v1;
                m1[b] = v;
                b = "";
            }
            else{
                b += a[i];
            }
        }
    }

    string a;
    bool chk = true;
    cin >> a;

    for(auto f : nm){
        for(auto e : m2[a]){
            v.clear();
            v = m1[e];
            if(f == a) continue;
            if(find(v.begin(), v.end(), f) != v.end()){
                if(find(out.begin(), out.end(), f) != out.end()) continue;
                cout << ">> " << f << endl;
                out.push_back(f);
                chk = false;
            }
        }
    }

    if(chk) cout << ">> Not Found";

    return 0;
}