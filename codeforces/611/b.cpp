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
        ll n,k,jmlh;
        cin >> n >> k;
        jmlh = n/k*k + min(n%k,k/2);
        cout << jmlh << endl;
    }
}