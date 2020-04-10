#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int arr[4],n;
    int max1 = 0;
    rep(i,3){
        cin >> arr[i];
        max1 = max(max1,arr[i]);
    }
    cin >> n;
    int hasil = n - (max1-arr[0] + max1-arr[1] + max1-arr[2]);
    hasil%3 == 0 && hasil >= 0 ? cout << "YES" : cout << "NO";
    cout << "\n";
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}