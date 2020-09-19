#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        ll a[51];
        ll b[51];
        ll min_a = INT64_MAX;
        ll min_b = INT64_MAX;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(min_a > a[i]){
                min_a = a[i];
            }
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
            if(min_b > b[i]){
                min_b = b[i];
            }
        }
        ll move_need = 0;
        for(int i = 0; i < n; ++i){
            move_need += max(a[i]-min_a,b[i]-min_b);
        }
        cout << move_need << endl;
    }
}