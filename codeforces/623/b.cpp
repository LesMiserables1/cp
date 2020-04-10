#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n,m;
    cin >> n >> m;
    int a[101];
    set<int> p;

    rep(i,n){
        cin >> a[i];
    }
    rep(i,m){
        int x;
        cin >> x;
        p.emplace(x);
    }
    bool status = 1;
    rep(i,n){
        for(int j = 0; j < n-1;j++){
            if (a[j] > a[j+1]) {
                if(p.count(j+1))
                    swap(a[j],a[j+1]);
                else{
                    status = 0;
                    break;
                }
            }
        }
    }
    status ? cout << "YES" : cout << "NO";
    cout << endl;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}