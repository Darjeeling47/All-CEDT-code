#include <bits/stdc++.h>
using namespace std;

vector<pair<pair<int, int>, vector<int>>> v;
vector<int> num;

int main() {

    string type;
    int num_tmp;

    cin >> type;
    while(cin >> num_tmp){
        num.push_back(num_tmp);
    }

    //insert
    if(type == "best"){
        sort(num.rbegin(), num.rend());
    }

    vector<int> v_tmp;
    int sum = 0;

    if(v.empty()){
        v_tmp.push_back(num[0]);
        sum = num[0];
        v.push_back(make_pair(make_pair(sum, -1), v_tmp));
    }

    for(int i = 1; i < num.size(); i++){

        bool push = false;
        sum = 0;
        v_tmp.clear();

        for(auto & e : v){
            if(num[i] + e.first.first <= 100){
                v_tmp = e.second;
                v_tmp.push_back(num[i]);
                sum = e.first.first;
                sum += num[i];
                e = make_pair(make_pair(sum, e.first.second - 1), v_tmp);
                push = true;
                break;
            }
        }

        sum = 0;
        v_tmp.clear();

        if(!push){
            v_tmp.push_back(num[i]);
            sum = num[i];
            v.push_back(make_pair(make_pair(sum, -1), v_tmp));
        }
    }

    //sort
    sort(v.rbegin(), v.rend());
    for(auto & e : v){
        sort(e.second.begin(), e.second.end());
    }

    //print
    for(auto & e : v){
        for(auto & f : e.second){
            cout << f << " ";
        }
        cout << endl;
    }

    return 0;
}