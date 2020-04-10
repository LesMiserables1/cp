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
        vector<int> a;
        vector<int> b;
        int n;
        cin >> n;
        rep(i,n){
            int x;
            cin >> x;
            a.pb(x);
        }
        rep(i,n){
            int x;
            cin >> x;
            b.pb(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(auto i : a){
            cout << i << " ";
        }
        cout << endl;
        for(auto i : b){
            cout << i << " ";
        }
        cout << endl;
    }
}