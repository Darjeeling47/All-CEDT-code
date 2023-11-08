#include <bits/stdc++.h>
using namespace std;

string ctry[1000], path, tmp, tmp_o;
int cost[1000];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, l;
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ctry[i] >> cost[i];
    }

    cin.ignore();
    getline(cin, path);

    l = path.length();
    tmp_o = path[4];
    tmp_o += path[5]; 
    for(int i = 6; i < l; i++){
        if(path[i] == '-'){
            tmp = path[i + 1];
            tmp += path[i + 2];

            for(int j = 0; j < n; j++){
                if(tmp == ctry[j]){
                    if(tmp_o == tmp){
                        break;
                    }
                    else if(tmp_o != tmp){
                        sum += cost[j];
                        tmp_o = tmp;
                        break;
                    }
                }
            }

            i += 2;
        }
    }

    cout << sum;

    return 0;
}