#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n;
    int arr[1002][1002] = {0};
    cin >> n;
    int max_x = -1;
    int max_y = -1;
    rep(i,n){
        int x,y;
        cin >> x >> y;
        arr[x][y] = 1;
        max_x = max(max_x,x);
        max_y = max(max_y,y);
    }
    string hsl = "";
    int c = 0;
    int y = 0;
    rep(i,max_x+1){
        string temp = "";
        loop(j,y,max_y+1){
            if(arr[i][j]){
                hsl += temp;
                temp = "";
                y = j;
                c++;
            }
            temp += "U";
        }
        if(i < max_x)hsl += 'R';
    }
    c == n ? cout << "YES\n" << hsl : cout << "NO";
    cout << "\n";
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}