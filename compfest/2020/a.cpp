#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    vector<vector<int>> num;

    for(int i = 0; i < 5; ++i){
        vector<int> idx;
        for(int j = 0; j < 5; ++j){
            idx.pb(j);
        }
        num.pb(idx);
    }
    cout << num.size();
}
