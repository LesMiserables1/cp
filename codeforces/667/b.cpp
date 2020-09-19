#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;

        ll a_1 = a, b_1 = b, n_1 = n;
        ll a_2 = a, b_2 = b, n_2 = n;

        ll subs = min(n_1,a_1-x);
        a_1 -= subs;
        n_1 -= subs;
        b_1 -= min(n_1,b_1-y);

        subs = min(n_2,b_2-y);
        b_2 -= subs;
        n_2 -= subs;
        a_2 -= min(n_2,a_2-x);

        cout << min(a_2*b_2,a_1*b_1) << endl;
    }
}