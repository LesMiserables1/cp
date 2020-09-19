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
        ll n;
        int m,x;
        cin >> n >> m >> x;
        ll border_l = INT64_MAX,border_r = 0;
        for(int i = 0; i < x; ++i){
            ll l,r;
            cin >> l >> r;
            if(l <= m && m <= r){
                border_l = min(border_l,l);
                border_r = max(border_r,r);
            }else if(border_l <= l || border_r >= r){
                border_l = min(border_l,l);
                border_r = max(border_r,r);
            }
        }
        cout << border_r - border_l + 1<< endl;
    }
}