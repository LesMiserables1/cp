#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> stones(k+1);
    for(int i = 1;i <= k; ++i){
        int x,y;
        cin >> x >> y;
        stones[i] = {x,y};
    }
    
    int dp[102][2002] = {0};
    vector<int> rs[102][2002];
    for(int i = 0; i <= k; ++i){
        for(int j = 0; j <= n; ++j){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
                rs[i][j].pb(0);
            }else if(j >= stones[i].first){
                if(stones[i].second + dp[i-1][j-stones[i].first] > dp[i-1][j]){
                    dp[i][j] = stones[i].second + dp[i-1][j-stones[i].first];
                    for(int& x : rs[i-1][j-stones[i].first]){
                        rs[i][j].pb(x);
                    }
                    rs[i][j].pb(i);
                }else if(stones[i].second + dp[i-1][j-stones[i].first] == dp[i-1][j]){
                    int weight_2 = 0,weight_1 = 0;
                    for(int& x : rs[i-1][j-stones[i].first]){
                        weight_1 += stones[x].first;
                    }
                    for(int& x : rs[i-1][j]){
                        weight_2 += stones[x].first;
                    }
                    vector<int> w;
                    if(stones[i].first + weight_1 < weight_2 ){
                        for(int& x : rs[i-1][j-stones[i].first]){
                            rs[i][j].pb(x);
                        }
                        rs[i][j].pb(i);
                    }else{
                        for(int& x : rs[i-1][j]){
                            rs[i][j].pb(x);
                        }
                    }
                }else{
                    dp[i][j] = dp[i-1][j];
                    for(int& x : rs[i-1][j]){
                        rs[i][j].pb(x);
                    }
                }
            }else{
                dp[i][j] = dp[i-1][j];
                for(int& x : rs[i-1][j]){
                    rs[i][j].pb(x);
                }
            }
        }
    }
    for(int& i : rs[k][n]){
        if(i)
        cout << i << '\n';
    }
}