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
    string st[101];
    rep(i,n){
        cin >> st[i];
    }
    string fr = "";
    string bc = "";
    string md = "";
    bool visit[101];
    memset(visit,0,sizeof visit);
    rep(i,n){
        if(!visit[i]){
            rep(j,n){
                if(visit[j]) continue;
                bool status = 1;
                rep(k,m){
                    if(st[i][k] != st[j][m-1-k]){
                        status = 0;
                        break;
                    }
                }
                if(status){
                    visit[i] = 1;
                    visit[j] = 1;
                    if(i != j){
                        fr = fr + st[i];
                        bc = st[j] + bc;
                    } 
                    if(i==j) md = st[j];
                    break;
                }
            }
        }
    }
    string hsl = fr+md+bc;
    cout << hsl.length() << endl;
    cout << hsl << endl;
}
int main(){
    solve();
}