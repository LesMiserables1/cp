#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int grid[502][502];
vector<pair<int,int>> block;
ll dp[250001];
int n,m,b;

long long calculate(int x,int y){
    if(x > n || y < 1 || y > m){
        return 0;
    }
    if(grid[x][y] != -1){
        if(dp[grid[x][y]] != -1)
            return dp[grid[x][y]];
        return dp[grid[x][y]] = 1 + calculate(x-1,block[grid[x][y]].first) + calculate(x-1,block[grid[x][y]].second);
    }
    return calculate(x+1,y);
}

int main(){
    memset(grid,-1,sizeof(grid));
    memset(dp,-1,sizeof dp);
    cin >> n >> m >> b;
    for(int i = 0; i < b; ++i){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j <= x2; ++j){
            for(int k = y1; k <= y2; ++k){
                grid[j][k] = i;
            }
        }
        block.push_back({y1-1,y2+1});
    }
    long long ans = 0;
    for(int i = 1; i <= m; ++i){
        ans = max(ans,calculate(1,i));
    }
    cout << ans << endl;
}