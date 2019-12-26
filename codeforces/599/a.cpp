#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef vector<int> vi;

void solve(){
    int n;
    int arr[1001];
    
    cin >> n;
    rep(i,n){
        cin >> arr[i];
    }
    int x;
    loop(i,1,n+1){
       int c = 0;
        rep(j,n){
            if(i <= arr[j])
                c++;
        }
        if(i <= c)
            x = i;
    }
    cout << x << "\n";
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}