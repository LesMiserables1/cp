#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    bool ch = 0;
    if(n%2 == 1) ch = 1;
    bool stat = 0;
    int odd = 0, even = 0;
    vector<int> hs;
    rep(i,n){
        int x;
        cin >> x;
        hs.pb(x);
    }
    for(auto x : hs){
        if(ch){
            if(x%2){
                stat = 1;
                break;
            }
        }else{
            if(x%2){
                odd++;
            }else
                even++;
        }
    }
    if(stat){
        cout << "YES\n";
    }else if(odd > 0 && even > 0){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}