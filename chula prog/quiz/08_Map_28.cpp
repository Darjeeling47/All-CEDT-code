#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> song;
string full, name, art;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, full);

        int l = full.length();
        int tmp;
        name = full[0];
        art = "";

        for(int j = 1; j < l; j++){
            if(full[j] == ','){
                tmp = j;
                break;
            }
            name += full[j];
        }
        for(int j = tmp + 2; j < l; j++){
            art += full[j];
        }
        song[name].push_back(art);
    }

    // for(auto & e : song){
    //     cout << e.first << " -> ";
    //     for(auto & e1 : e.second){
    //         cout << e1 << ", ";
    //     }
    //     cout << endl;
    // }

    getline(cin, full);
    name = "";

    int l = full.length();
    for(int i = 0; i < l; i++){
        if(full[i] == ',' || i == l - 1){

            if(i == l - 1) name += full[i];
            cout << name << " -> ";

            if(song[name].size() == 0){
                cout << "Not found";
            }

            for(int j = 0; j < song[name].size(); j++){
                if(j == song[name].size() - 1){
                    cout << song[name][j];
                }
                else {
                    cout << song[name][j] << ", ";
                }
            }

            cout << endl;
            name = "";
            i+=1;
        }
        else{
            name += full[i];
        }
    }

    return 0;
}