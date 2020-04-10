#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

void solve(){
    long long a,b;
    cin >> a >> b;   
    if(a >= b) {
        cout << "yes\n";
        return;
    }
    if(a <= 3 && b >3 || a == 1 )
        cout << "no\n";
    else
        cout << "yes\n";
    return;
}   

int main(){
    int tc;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> tc;
    while(tc--){
        solve();
    }
}