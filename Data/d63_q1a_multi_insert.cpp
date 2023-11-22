#include <iostream>
#include <vector>
using namespace std;

void multiple_add(vector<int> &v, int value, int position, int count) {

    vector<int> v1(count, value), tmp, temp;

    for(auto itr = v.begin(); itr != v.begin() + position; itr++){
        temp.push_back(*itr);
    }
    for(auto itr = v.begin() + position; itr != v.end(); itr++){
        tmp.push_back(*itr);
    }

    v.resize(v.size() + position);
    v = temp;

    for(auto &e : v1){
        v.push_back(e);
    }
    for(auto &e : tmp){
        v.push_back(e);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,value,position,count;
    
    cin >> n >> value >> position >> count;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];
    multiple_add(v,value,position,count);
    
    cout << "After call multiple_add" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}