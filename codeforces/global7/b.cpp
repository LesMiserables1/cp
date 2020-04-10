#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll arr[200001];
    vector<ll> a;
    ll m = -1;
    for(ll i =0; i < n;i++){
        cin >> arr[i];
        if(i > 0){
            a.pb(arr[i]+m);
        }
            m = max(m,arr[i]+max(m,arr[i-1]));
    }
    cout << arr[0] << " ";
    for(auto i : a){
        cout << i << " ";
    }
    cout << endl;
}