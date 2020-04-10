#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n,m;
    cin >> n >> m;
    string st;
    cin >> st;
    vector<int> p(n,0);
    int min1 = INT16_MAX;
    rep(i,m){
        int x;
        cin >> x;
        p.pb(x);
    }
    sort(p.begin(),p.end());
    vector<int> pj(n,0);
    rep(i,m){
        pj[i] = m-i;
    }
    pj[p[m-1]]++;
    vector<int> hsl(26,0);
    rep(i,n){
        hsl[(int)st[i]-97] += pj[i]+1;
    }
    for(auto i : hsl){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}