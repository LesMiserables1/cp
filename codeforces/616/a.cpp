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
    string s;
    cin >> n;
    cin >> s;
    string st = "";
    int jumlah = 0;
    rep(i,s.length()){
        int x;
        x = s[i]-'0';
        if(x%2 != 0){
            jumlah += x;
            st += s[i];
            if(jumlah%2 == 0) break;
        }
    }
    if(jumlah%2 == 0 && jumlah > 0)
        cout << st << endl;
    else
        cout << "-1\n";
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}