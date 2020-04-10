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
    char a;
    int hsl = 0;
    bool stat = 0;
    int max1 = 0;
    rep(i,n){
        cin >> a;
        if(a == 'P' and stat){
            hsl++;
            max1 = max(max1,hsl);
        }
        if(a == 'A'){
            stat = 1;
            hsl = 0;
        }

    }
    cout << max1 << endl;
}
int main(){
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
}