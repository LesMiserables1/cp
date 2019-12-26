#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

void solve(){
    int n,l = 0,r = INT_MAX;
    cin >> n;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        if(l < a && a <= r){
            l = a;
        }
        if(r > b && b >= l){
            cout << "test";
            r = b;
        }
    }
    cout << r-l << "\n";
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}