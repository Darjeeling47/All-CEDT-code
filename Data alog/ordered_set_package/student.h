#include <bits/stdc++.h>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v, tmp;
    set<T> s;

    int num = 0;
    v = A;

    for(auto &e : A)
        s.insert(e);

    for(auto &e : B){
        if(s.find(e) == s.end()){
            v.push_back(e);
            s.insert(e);
        }
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v, tmpB;

    tmpB = B;

    sort(tmpB.begin(), tmpB.end());

    for(auto &e : A){
        auto itr1 = lower_bound(tmpB.begin(), tmpB.end(), e);
        auto itr2 = upper_bound(tmpB.begin(), tmpB.end(), e);

        if(itr1 != itr2){
            v.push_back(e);
        }
    }

    return v;
}
