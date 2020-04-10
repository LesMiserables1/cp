#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,d;
        cin >> n >> d;
        vector<int> h;
        cin >> h[0];
        rep(i,n){
            int x;
            cin >> x;
            h.pb(x);
        }
        int hsl = 0;
        for(int i = 1; i < h.size() && d > 0;i++){
            hsl += (min(h[i]*i,d)/i);
            d -= min(h[i],d);
        }
        cout << hsl+h[0] << endl;
    }
}