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
        int n,x;
        cin >> n >> x;
        int odd = 0, even = 0;
        for(int i = 0; i < n; ++i){
            int m;
            cin >> m;
            if(m%2) odd++;
            else even++;
        }
        int req_odd;
        req_odd = x%2 ? x : x-1;
        odd = odd%2 ? odd : odd - 1;
        req_odd = min(req_odd,odd);
        if(req_odd + even >= x && req_odd > 0) cout << "yes\n";
        else cout << "no\n";
    }
}