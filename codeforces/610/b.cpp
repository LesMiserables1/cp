#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

void solve(){
    int n,p,k,arr[2e+5]
    cin >> n >> p >> k;
    int min = INT_MAX;
    rep(i,n){
        cin >> arr[i];
        if(min < arr[i]){
            min = arr[i];
        }
    }
    p -= min;
    if(p > 0){
        int cnt = 1;
        rep(i,n){
            if(arr[i] != min){
                if(arr[i] <= p)
            }
        }
    }
    
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}