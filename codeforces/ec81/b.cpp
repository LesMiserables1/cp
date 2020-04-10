#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    ll n,g,b;
    cin >> n >> g >> b;
    ll hsl = min(n,g);
    ll temp = n;
    n -= g;
    if(n > 0){

        if(n >= (temp-temp/2)){
            n -= temp/2;
            hsl += n*b + n*g;
        }else{
            n -= b;
            hsl += b;
            if(n > 0)
                hsl += g;
        }
    }
    cout << hsl << endl;
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}