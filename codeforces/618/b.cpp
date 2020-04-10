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
    vector<int> bil;
    rep(i,2*n){
        int x;
        cin >> x;
        bil.pb(x);
    }
    sort(bil.begin(),bil.end());
    int min1 = INT16_MAX;
    for(int i = 0;i<2*n;i+=2){
        int hsl = abs(bil[i/2] - bil[(i+2*n)/2]);
        deb(hsl);
        min1 = min(min1,hsl);
    }
    cout << min1 << endl;
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}