#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int arr[1000][1000];
int hsl = 0,n,m;

void jaw(int x,int y,int z){
    if(x > -1 && y > -1 && x < n && y < m && arr[x][y] == z){
        arr[x][y] = -1;
        hsl++;
        jaw(x-1,y,z);
        jaw(x,y-1,z);
        jaw(x+1,y,z);
        jaw(x,y+1,z);
    }
    return ;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int max_x = -1;
    rep(i,n){
        rep(j,m){
            if(arr[i][j] > 0) jaw(i,j,arr[i][j]);
            max_x = max(max_x,hsl);
            hsl = 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << max_x * (max_x -1) << endl;
}