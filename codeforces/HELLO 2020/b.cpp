#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,m[100002],mi[100002];
    vector<vector<int>> arr;
    bool stat[100002];
    cin >> n;
    memset(stat,false,sizeof(stat));
    arr.resize(100002);
    rep(i,n){
        int l,max1 = -1,min1 = INT_MAX;
        cin >> l;
        rep(j,l){
            int x;
            cin >> x;
            arr[i].push_back(x);
            if(max1 < x){
                max1 = x;
                m[i] = j;
            } 
            if(min1 > x){
                min1 = x;
                mi[i] = j;
            }
            if(arr[i][j] > arr[i][j-1] and j>0){

                stat[i] = 1;
            }
        }
    }
    ll hsl = 0;
    rep(i,n){
        if(stat[i]){
            hsl+= 2;
            continue;
        } 
        loop(j,i,n){
            bool status = 0;
            if((stat[i] || stat[j]) == false){
                if(arr[i][mi[i]] < arr[j][m[j]]){
                    hsl++;
                    status = 1;
                }
                if(arr[j][mi[j]] < arr[i][m[i]]){
                    hsl++;
                    status = 1;
                }
            }else{
                hsl += 2;
                status = 1;
            }
            if(status and i == j) 
                hsl--;
        }
    }
    cout << hsl << endl;

}