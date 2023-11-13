#include <bits/stdc++.h>
using namespace std;

priority_queue<int> vote;
map<string, int> vote_i;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    while(n--){
        string name;
        cin >> name;
        vote_i[name] += 1;
    }

    for(auto &e : vote_i){
        vote.push(e.second);
    }

    for(int i = 0; i < k - 1; i++){
        vote.pop();
    }

    cout << vote.top();


    return 0;
}