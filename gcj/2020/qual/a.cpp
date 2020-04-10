#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;


int main(){
    int T;
    cin >> T;
    for(int i = 0;i < T;++i){
        int n;
        cin >> n;
        int arr[1001][1001];
        int sum = 0,row = 0,col = 0;
        rep(j,n){
            rep(l,n){
                cin >> arr[j][l];                
            }
            sum += arr[j][j];
        }
        rep(j,n){
            int cnt_col[1001];
            int cnt_row[1001];
            memset(cnt_row,0,sizeof cnt_row);
            memset(cnt_col,0,sizeof cnt_col);
            bool stat_row = 0;
            bool stat_col = 0;
            rep(l,n){
                cnt_row[arr[j][l]]++;
                if(cnt_row[arr[j][l]] > 1){
                    stat_row = 1;    
                }
                cnt_col[arr[l][j]]++;
                if(cnt_col[arr[l][j]] > 1){
                    stat_col = 1;
                }
            }
            if(stat_row) row++;
            if(stat_col) col++;
        }
        cout << "Case #" << i+1 << ": " << sum <<" "<< row << " " << col << endl;

    }
}