#include <bits/stdc++.h>
using namespace std;

int a[100000][4], b[100000];

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    int n, m, x, start, end, first, second;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> start >> end;
        a[x][0] = start;
        a[x][1] = end;
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> first >> second;
        
        int mn = 100000;
        int name;

        //cout << "-- new one --" << endl;

        for(int j = 1; j <= n; j++){
            int cnt = 0;

            int di1 = -1, di2 = -1;

            if(a[j][1] - a[j][0] > 0){
                di1 = 1;
            }
            else if(a[j][1] - a[j][0] == 0){
                di1 = 0;
            }

            if(second - first > 0){
                di2 = 1;
            }

            if(((first >= a[j][0] && first <= a[j][1]) || (first <= a[j][0] && first >= a[j][1])) && di1 == di2){
                if((second >= a[j][0] && second <= a[j][1]) || (second <= a[j][0] && second >= a[j][1])){
                    cnt = 0;
                }
                else {
                    cnt = abs(second - a[j][1]);
                }
            }
            else{
                cnt = abs(first - a[j][1]);
                cnt += abs(second - first);
            }

            if(mn > cnt){
                mn = cnt;
                name = j;
            }

            //cout << ">> " << j << " " << di1 << " " << di2 << " " << cnt << endl;
        }

        cout << ">> " << name << endl;
    }

    return 0;
}