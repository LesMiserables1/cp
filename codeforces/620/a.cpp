#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    abs(x-y) % (a+b) == 0 ? cout << abs(x-y) / (a+b) : cout << -1;
    cout << endl;
}
int main(){
    int tc;
    cin >> tc;
    // while(tc--){
        for(int i = 0; i < 10;++i){
            cout << i << endl;
        }
        // solve();
    // }
}