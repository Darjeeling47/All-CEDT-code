#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int a;

    while(cin >> a){
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int tmp, tmp2 = -1, ch = 0;
    for(auto itr = v.begin(); itr != v.end(); itr++){
        tmp = *itr;
        if(tmp2 != tmp){
            ch++;
            tmp2 = tmp;
        }
    }

    cout << ch << endl;
    
    ch = 0;
    for(auto itr = v.begin(); itr != v.end(); itr++){
        tmp = *itr;
        if(tmp2 != tmp){
            ch++;
            tmp2 = tmp;
            cout << tmp << " ";
        }
        if(ch == 10){
            break;
        }
    }

    return 0;
}