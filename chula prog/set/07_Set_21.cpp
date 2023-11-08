#include <bits/stdc++.h>
using namespace std;

set<int> s;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int num, tempn;
    cin >> num;

    int tmp;
    while(cin >> tmp){
        s.insert(tmp);
    }

    tempn = num;
    num = num / 2;

    int i = 0;
    int cnt = 0;
    for(auto itr = s.begin(); i < num; i++, itr++){
        if(*itr > num) break;
        if(s.find(tempn - *itr) == s.end()) continue;
        if(*s.find(tempn - *itr) == *itr) continue;
        //cout << *itr << " " << *s.find(tempn - *itr) << endl;
        cnt++;
    }

    cout << cnt;

    return 0;
}