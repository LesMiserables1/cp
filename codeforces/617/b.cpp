#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    string st;
    cin >> st;
    char* endptr = NULL;
    ll x = strtoll(st.c_str(),&endptr,10);
    ll jml = 0;
    rep(i,st.length()){
        jml += (x/10) * 10;
        x = x/10 + x%10;
    }
    jml += x;
    cout << jml << "\n";
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}