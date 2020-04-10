#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

vector< pair<int,char>> g;
vector<int> v;
int cnt = 0,n,r,y,j,st = 1001,prc = 0,maks = 0;
const int N = 1e+5+1;
bool p[100];
int hsl[N],bts[1001];


int count(int st){
    int prc = 0;
    if(v.size() > 1){
        if(g[v[v.size()-2]].second == 'P'){
            prc += g[v[v.size()-1]].first * 2;
        }else if(g[v[v.size()-2]].second == 'L'){
            prc += g[v[v.size()-1]].first/2;
        }else if(g[v[v.size()-2]].second == 'B' || g[v[v.size()-2]].second == 'Y' ){
            prc += g[v[v.size()-1]].first;     
        }  
    }else
        prc += g[v[0]].first;
    if(st < v.size()-1){
        prc += y;
    }
    return prc;
}

void permutate(){   
    if(v.size() == r){
        if(prc > maks)
            hsl[maks]++;
        else{
            if(prc == maks)
                cnt++;
            hsl[prc]++;
        }
    }else{
        rep(i,n){
            if(p[i]) continue;
            p[i] = 1;
            v.pb(i);
            if(g[i].second == 'Y')
                st = v.size()-1;
            if(g[v[st]].second != 'Y')
                st = 1001;
            prc += count(st);
            permutate();
            prc -= count(st);
            v.pop_back();
            p[i] = 0;
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
        if(maks < bts[i])
            maks = bts[i];
    }
    memset(hsl,0,sizeof(hsl));
    permutate();
    rep(i,j){
        int c = 0;
        for(int k = bts[i];k <= maks;k++){
            c += hsl[k];
        }
        if(bts[i] == maks) c -= cnt;
        else
            c -= hsl[bts[i]];
        cout << c << endl;
    }
}