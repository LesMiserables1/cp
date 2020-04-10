#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if((c-a-b > 0) && 4*a*b < (c-a-b)*(c-a-b)){
        cout << "Yes";
    }else
        cout << "No";
    cout << '\n';
}