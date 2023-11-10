#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, tmp;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(i % 2 == 0){
            v.push_back(a);
        }
        else{
            auto itr = v.begin();
            v.insert(itr, a);
        }
        tmp = i;
    }

    tmp++;

    int a = 0;
    while(a != -1){
        cin >> a;

        if(a % 1 == 1){
            continue;
        }

        if(a == -1){
            break;
        }

        if(tmp % 2 == 0){
            v.push_back(a);
        }
        else{
            auto itr = v.begin();
            v.insert(itr, a);
        }

        tmp++;
    }

    cout << "[";
    // for(int i = 0; i < v.size(); i++){
    //     if(i == v.size() - 1){
    //         cout << v[i];
    //         break;
    //     }
    //     else{
    //         cout << v[i] << ", ";
    //     }
    // }

    for(auto itr = v.begin(); itr != v.end(); itr++){
        if(itr == v.begin()){
            cout << *itr;
        }
        else{
            cout << ", " << *itr;
        }
    }
    cout << "]";

    return 0;
}