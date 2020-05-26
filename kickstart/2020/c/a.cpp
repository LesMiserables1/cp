#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n,k;
    cin >> n >> k;
    int rslt = 0;
    int m = k;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x != m){
            m = k;
        }
        if(x == m){
            m--;
            if(!m){
                rslt++;
                m = k;
            }
        }
    }
    cout << rslt << "\n";
}

int main(){
    int T; cin >> T;
    for(int i = 1;i <= T; ++i){
        cout << "Case #"<< i << ": ";
        solve();
    }    
}