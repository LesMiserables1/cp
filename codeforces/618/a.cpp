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
    int sum = 0,z = 0;
    rep(i,n){
        int x;
        cin >> x;
        sum += x;
        if(!x) z++;
    }
    int hsl = 0;
    if(sum+z == 0) hsl++; 
    cout << hsl+z << endl;
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}