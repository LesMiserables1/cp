#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

int main(){
    int n,m,arr[50][50],cln[50][50];
    cin >> n >> m;
    rep(i,n){
        rep(j,m){
            cin >> arr[i][j];
            cln[i][j] = arr[i][j];
        }
    }
    vector< pair <int,int> > hsl;
    rep(i,n-1){
        rep(j,m-1){
            if(arr[i][j] && arr[i+1][j+1] && arr[i][j] && arr[i+1][j]&&arr[i][j+1]){
                cln[i][j] = 0;
                cln[i+1][j] = 0;
                cln[i][j+1] = 0;
                cln[i+1][j+1] = 0;
                hsl.pb(mp(i,j));
            }
        }
    }
    bool status = 1;
    rep(i,n){
        rep(j,m){
            if(cln[i][j] == 1){
                status = 0;
                break;
            }
        }
    }
    if(status){
        cout << hsl.size() << '\n';
        rep(i,hsl.size()){
            cout << hsl[i].first+1 << " " << hsl[i].second+1 << '\n';
        }        
    }else
        cout << -1 << '\n';
}