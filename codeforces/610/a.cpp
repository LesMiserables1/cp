#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    ll a,b,c,r,prc;
    cin >> a >> b >> c >> r;
    if(a>b)  
        swap(a,b);
    ll lft = max(a,c-r);
    ll rgt = min(b,c+r);
    rgt -= lft;
    rgt = max(0ll,rgt);
    cout << (b-a)-rgt << '\n';
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}