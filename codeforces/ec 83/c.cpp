#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (ll i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<ll> arr;
    rep(i,n){
        ll x;
        cin >> x;
        arr.pb(x);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    ll temp = arr[0];
    ll p = 0;
    while(temp > 1){
            temp /= k;
            p++;
    }
    bool status = 1;
    bool hsl[100000] = {0};
    rep(i,n){
        for(ll j=p;j>=0;j--){
            ll png = pow(k,j);
            if(png == arr[i]){
                if(hsl[j] == 0){
                    arr[i] = 0;
                    hsl[j] = 1;
                    break;
                }else{
                    status = false;
                    break;
                }
            }else if(png < arr[i]){
                hsl[j] = 1;
                arr[i] -= png;
            }
        }
        if(arr[i] != 0 || !status){
            status = 0;
            break;
        }
    }
    // for(auto i : hsl) cout << i;
    status ? cout << "YES" : cout << "NO";
    cout << endl;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}