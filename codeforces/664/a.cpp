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
        
        vector<ll> col;
        ll min_col = INT64_MAX;
        int odd_1 = 0,even_1 = 0;
        for(int i = 0; i < 4; ++i){
            ll x;
            cin >> x;
            if(min_col > x){
                min_col = x;
            }
            if(x%2){
                odd_1++;
            }else{
                even_1++;
            }
            col.pb(x);
        }
        for(int i = 0; i < 4; ++i){
            if(i == 3){
                col[i] += (min_col*3);
            }else{
                col[i] -= min_col;
            }
        }
        int odd = 0, even = 0;
        for(int i = 0; i < 4; ++i){
            if(col[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        (odd <= 1 || (odd_1 <= 1)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}