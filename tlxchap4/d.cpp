#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

vector< pair<int,char>> g;
vector<int> v;
int cnt = 0,n,r,y,j;
bool p[100];
int hsl[1001],bts[1001];

void solve(){
    int prc = 0,st = 1001;
    rep(i,j){
        if(!prc){
            rep(k,v.size()){
                if(g[v[k]].second == 'Y'){
                    st = k;
                }
                if(k > 0){
                    if(g[v[k-1]].second == 'P'){
                        prc += g[v[k]].first * 2;
                    }else if(g[v[k-1]].second == 'L'){
                        prc += g[v[k]].first/2;
                    }else if(g[v[k-1]].second == 'B' || g[v[k-1]].second == 'Y' ){
                        prc += g[v[k]].first;
                    }  
                }else
                    prc += g[v[k]].first;
                if(st < k){
                    prc += y;
                }
            }
        }
        if(prc > bts[i]){
            hsl[i]++;
        }
    }
}

void permutate(){   
    if(v.size() == r){
        solve();
    }else{
        rep(i,n){
           if(p[i]) continue;
           p[i] = 1;
           v.pb(i);
           permutate();
           p[i] = 0;
           v.pop_back(); 
        }
    }
}
int main(){
    string subsoal;
    getline(cin,subsoal);
    cin >> n >> r >> y >> j;
    rep(i,n){
        int d;
        char t;
        cin >> d >> t;
        g.pb(mp(d,t));
    }
    rep(i,j){
        cin >> bts[i];
    }
    memset(hsl,0,sizeof(hsl));
    permutate();
    rep(i,j){
        cout << hsl[i] << endl;
    }
}