#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll a,b;
        cin >> a >> b;
        if(a < b) swap(a,b);
        ll sum_2 = 1;
        while(b < a){
            sum_2 *= 2;
            b *= 2;
        }
        if(b != a){
            cout << -1 << endl;
            continue;
        }else{
            ll rsl = 0;
            while(sum_2 > 1){
                if(sum_2 >= 8){
                    sum_2 = sum_2/8;
                }else if(sum_2 >= 4){
                    sum_2 = sum_2/4;
                }else{
                    sum_2 = sum_2/2;
                }
                rsl++;
            }
            cout << rsl << endl;
        }
    }
}