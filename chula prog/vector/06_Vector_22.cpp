#include <bits/stdc++.h>
using namespace std;

vector<int> v, w;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int x, mx, tmp = -1, ch = 0;
    mx = 0;
    while(cin >> x){

        if(x != tmp){
            tmp = x;
            ch = 1;
        }
        else if(x == tmp){
            ch++;
        }

        if(mx < ch){
            mx = ch;
        }

        v.push_back(x);
    }

    tmp = -1, ch = 0;
    for(auto e : v){
        if(e != tmp){
            tmp = e;
            ch = 1;
        }
        else if(e == tmp){
            ch++;
        }

        if(ch == mx){
            w.push_back(e);
        }
    }

    sort(w.begin(), w.end());

    int l = v.size();
    int fst, end;
    tmp = -1;
    for(auto e : w){
        cout << e << " --> x[ ";

        if(tmp == e){
            for(int i = end; i < l; i++){
                if(e == v[i]){
                    cout << i << " : " << i + mx << " ]" << endl;
                    end = i + mx;
                    break;
                }
            }
            continue;
        }
        else{
            tmp = e;
        }

        for(int i = 0; i < l; i++){
            if(e == v[i]){
                cout << i << " : " << i + mx << " ]" << endl;
                end = i + mx;
                break;
            }
        }
    }

    return 0;
}