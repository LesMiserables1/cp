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
        ll l,r;
        cin >> l >> r;
        if(l*2 <= r){
            cout << l << " " << l*2;
        }else{
            cout << -1 << " " << -1;
        }
        cout << endl;
    }
}