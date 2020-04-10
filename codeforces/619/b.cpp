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
    ll arr[200001];
    ll max1 = 0;
    ll min1 = INT64_MAX;
    rep(i,n){
        cin >> arr[i];
    }
    rep(i,n){
        if((arr[i-1] == -1 || arr[i+1] == -1) && arr[i] != -1){
            max1 = max(arr[i],max1);
            min1 = min(arr[i],min1);
        }
    }
    ll jml = (max1 + min1)/2;
    rep(i,n-1){
        if(arr[i] == -1) arr[i] = jml;
        if(arr[i+1] == -1) arr[i+1] = jml;
        max1 = max(max1,abs(arr[i]-arr[i+1]));
    }
    cout << max1 <<" "<< jml << endl;
}
int main(){
    int tc;
    #ifdef __DEBUG
        strea
    #endif
    cin >> tc;
    while(tc--){
        solve();
    }
}