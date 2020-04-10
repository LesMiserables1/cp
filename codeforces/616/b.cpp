#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n,arr[300001];
    bool status = true,down = false;
    cin >> n;
    int p = 0;
    rep(i,n){
        cin >> arr[i];
    }
    int x = 0;
    bool check = false;
    rep(i,n){
        if(x > arr[i]){
            x = arr[i];
            down = true;
        }else{
            if(down){
                status = 0;
                break;
            }
            else x++;
        }
    }
    status ? cout << "YES\n" : cout << "NO\n";
    return;
}

int main(){
    int tc;
    cin >> tc;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    while(tc--){
        solve();
    }
}