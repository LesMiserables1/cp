#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;

    vector<pair<ll,ll>> judge;
    vector<pair<ll,ll>> c;
    for(int i = 0; i < n; ++i){
        ll a,b;
        cin >> a >> b;
        judge.pb({a,b});
    }
    
    for(int i = 0; i < m; ++i){
        ll a,b;
        cin >> a >> b;
        c.pb({a,b});
    }
    const int N = 1e5+1;
    int count_c[N] = {0};
    for(int i = 0; i < n; ++i){
        ll max_val = 0;
        int max_c = 0;
        for(int j = 0; j < m; ++j){
            ll val = judge[i].first * c[j].first + judge[i].second * c[j].second;
            if(max_val < val){
                max_val = val;
            }
        }
        for(int j = 0; j < m; ++j){
            ll val = judge[i].first * c[j].first + judge[i].second * c[j].second;
            if(max_val == val){
                count_c[j]++;x
            }
        }
    }

    for(int i = 0; i < m; ++i){
        cout << count_c[i] << endl;
    }
}