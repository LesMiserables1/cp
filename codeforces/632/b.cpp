#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;
const int N = 1e+5;

void solve(){
    int n;
        cin >> n;
        int a[N],b[N];
        rep(i,n){
            cin >> a[i];
        }
        rep(i,n){
            cin >> b[i];
        }
        bool can_inc = 0, can_dec = 0;
        rep(i,n){
            if(b[i] > a[i]){
                if(!can_inc){
                    cout << "No\n";
                    return;
                }
            }else if(b[i] < a[i]){
                if(!can_dec){
                    cout << "No\n";
                    return;
                }
            }
            if(a[i] == 1) can_inc = 1;
            if(a[i] == -1) can_dec = 1;
        }
        cout << "Yes\n";
        return ;
}
int main(){
    int T; cin >> T;
    while(T--){
        solve();    
    }
}