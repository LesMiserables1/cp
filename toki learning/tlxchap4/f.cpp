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
bool visit[1000][1000] = {0};

void jaw(int x,int y,int z){
    if(x > -1 && y > -1 && x < n && y < m && arr[x][y] == z && !visit[x][y]){
        visit[x][y] = 1;
        hsl++;
        jaw(x-1,y,z);
        jaw(x,y-1,z);
        jaw(x+1,y,z);
        jaw(x,y+1,z);
    }
    return ;
}
void point(int x,int y,int z){
    if(x > -1 && y > -1 && x < n && y < m && arr[x][y] == z){
        arr[x][y] = -1;
        point(x-1,y,z);
        point(x,y-1,z);
        point(x+1,y,z);
        point(x,y+1,z);
    }
}
void runtuh(){
    for(int i = m - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            if(arr[j][i] == -1){
                for(int k = j-1; k >= 0; k--){
                    if(arr[k][i] != -1){
                        swap(arr[j][i],arr[k][i]);
                        break;
                    }
                }
            }
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int max_x = -1,max_prev;
    pair<int,int> p;
    rep(i,n){
        rep(j,m){
            if(arr[i][j] > 0) jaw(i,j,arr[i][j]);
            max_prev = max_x;
            max_x = max(max_x,hsl);
            if(max_x != max_prev){
                p = mp(i,j);
            }
            hsl = 0;
        }
    }
    point(p.first,p.second,arr[p.first][p.second]);
    runtuh();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == -1)
                cout << ".";
            else
                cout << arr[i][j];
            if(j < m-1) cout << " ";
        }
        cout << endl;
    }
}