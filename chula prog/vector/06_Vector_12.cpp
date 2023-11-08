#include <bits/stdc++.h>
using namespace std;

vector<int> num;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n;
    cin >> n;  
    num.push_back(n); 

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }

        num.push_back(n);
    }

    vector<int>::iterator end;

    if(num.size() > 15){
        end = num.end() - 15;
    }
    else{
        end = num.begin();
    }

    for(auto itr = end; itr != num.end(); itr++){
        int e = *itr;
        if(itr != num.end() - 1){
            cout << e << "->";
        }
        else{
            cout << e;
        }
    }

    return 0;
}