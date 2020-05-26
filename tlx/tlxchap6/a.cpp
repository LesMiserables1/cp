#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,b;
    vector<ll> bil;
    cin >> n >> b;
    rep(i,n){
        ll x;
        cin >> x;
        bil.pb(x);
    }
    sort(bil.begin(),bil.end());
    reverse(bil.begin(),bil.end());
    int x = 0;
    while(b > 0){
        b -= bil[x];
        x++;
    }
    cout << x << endl;
}