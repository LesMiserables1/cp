#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;
    ll hsl = ((1+n)/2)*((1+m)/2) + ((n/2) * (m/2));
    if (n == 1 || m == 1) hsl = 1;
    cout << hsl << endl;
}