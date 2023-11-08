#include <bits/stdc++.h>
using namespace std;

int que_n;
vector<int> tme, que;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, index = 0, call;
    double sum = 0, cnt = 0;
    cin >> n;

    while(n--){
        string a;
        cin >> a;
        if(a == "reset"){
            cin >> que_n;
        }
        else if(a == "new"){
            int t;
            cin >> t;

            tme.push_back(t);
            que.push_back(que_n);

            cout << ">> ticket " << que_n << endl;

            que_n++;
        }
        else if(a == "next"){
            cout << ">> call " << que[index] << endl;
            call = que[index];
            index++;
        }
        else if(a == "order"){
            int t;
            cin >> t;

            int id = find(que.begin(), que.end(), call) - que.begin();
            t -= tme[id];
            sum += t;
            cnt++;

            cout << ">> qtime " << call << " " << t << endl;
        }
        else{
            double avg = sum / cnt;
            cout << ">> avg_qtime " << round(avg*100.0)/100.0 << endl;
        }
    }

    return 0;
}