#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    ll a,len;
    string b;
    cin >> a >> b;
    len = b.length();
    string st = "";
    rep(i,len)
        st += '9';
    ll n = stoll(b);
    ll m = stoll(st);
    if(n == m)
        len++;
    cout << a*(len-1) << endl;
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}