#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

void solve(){
    long long r,g,b;
    cin >> r >> g >> b;
    long long max1 = max(max(r,g),b);
    long long jmh = r + g + b;
    max1 < (jmh-max1)+2 ? cout << "YES\n" : cout << "NO\n";
    
}
int main(){
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
}