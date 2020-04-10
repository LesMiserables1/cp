#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,m;
    string s[21],t[21];
    cin >> n >> m;
    loop(i,1,n){
        cin >> s[i];
        if(i == n)
        s[0] = s[i];
    }
    loop(i,1,m){
        cin >> t[i];
        if(i == m)
        t[0] = t[i];
    }
    int tc;
    cin >> tc;
    while(tc--){
        int q;
        cin >> q;
        cout << s[q%n] << t[q%m] << endl;
    }

}