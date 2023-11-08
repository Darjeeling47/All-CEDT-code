#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    map<string, string> ds; //dad and son
    map<string, string> gs; //grandfather and son
    set<string> id_d, id_s; //dad set & son set
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string dad, son;
        cin >> dad >> son;
        
        //map dad and son
        ds[son] = dad;

        //store dad and son to defind that this have been store
        id_d.insert(dad);
        id_s.insert(son);
    }

    //map son to grandfather
    for(auto &e : ds){

        //if you not have grandfather
        if(id_s.find(e.second) == id_s.end()){
            gs[e.first] = e.first; //set grandfather to him self so system can't find his grandfather in map
            continue;
        }

        //if you have grandfather
        gs[e.first] = ds[e.second];
    }

    //answer
    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;

        //if can't find data
        if(id_s.find(a) == id_s.end() || id_s.find(b) == id_s.end()){
            cout << "NO" << endl;
            continue;
        }

        //if the same person
        if(a == b){
            cout << "NO" << endl;
            continue;
        }

        if(gs[a] == gs[b]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }



    return 0;
}