#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;

    cin >> n >> k;
    if(n % 2 == 1){
        int sum_a = 0, sum_b = 0, sum_c = 0, m = 0;

        while(m < k){

            int a, b, c;
            cin >> a >> b >> c;

            if(a == b){
                if(a == b && b == c){
                    if(a + b > k){
                        sum_a += 1;
                        sum_b += 2;
                        sum_c -= 3;
                    }
                    else{
                        sum_a -= 3;
                        sum_b -= 2;
                        sum_c += 1;
                    }
                }
                else{
                    sum_a += 2;
                    sum_b -= 3;
                }
            }
            m++;
        }

        cout << sum_a << " " << sum_b << " " << sum_c;
        return 0;
    }
    else{
        int s, t, tmp;
        cin >> s >> t;

        int x = s;
        int y = t;

        if(s > t){
            x = s - t;
        }
        else if(s < t){
            y = 2 * (t - s);
        }

        if(x + y > k){
            tmp = x;
            x = y;
            y = tmp;

            x = y + pow(s, 2);
        }

        cout << x << " " << y;
        return 0;
    }
}