#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;
string ans, stu;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int ch = 0;

    getline(cin, ans);
    getline(cin, stu);

    if(ans.size() != stu.size()){
        cout << "Incomplete answer" << endl;
        return 0;
    }

    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == stu[i]){
            ch++;
        }
    }

    cout << ch << endl;

    return 0;
}