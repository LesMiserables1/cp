#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    ll n,d;
    cin >> n >> d;
    ll akar = sqrt(d);
    ll hasil = ceil((float)d/akar) + akar-1;
    if(hasil <= n)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}