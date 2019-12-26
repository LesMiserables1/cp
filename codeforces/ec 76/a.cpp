#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

void solve(){
    int n,x,a,b;
    cin >> n >> x >> a >> b;
    
    int max1 = max(a,b);
    int min1 = min(a,b);
    max1 = max1 + x;
    x = max1 > n ? max1 - n : 0;
    max1 = max1 > n ? n : max1;
    min1 = min1 - x < 1 ? 1 : min1 - x;
    cout << max1 - min1 << "\n" ;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}