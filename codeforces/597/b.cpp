#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define rep1(i,n) for (int i = 1; i <= n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
typedef vector<int> vi;

void solve(){
    int n,arr[3];
    vi index;
    cin >> n;
    rep(i,3){
        cin >> arr[i]; 
    }
    string st,hasil;
    hasil.resize(n);
    cin >> st;
        int win = 0;
    rep(i,n){
        if(st[i] == 'P'){
            if(arr[2] > 0){
                arr[2]--;
                hasil[i]= 'S';
                win ++;
            }else
                index.pb(i);
        } 
        if(st[i] == 'R'){
            if(arr[1] > 0){
                arr[1]--;
                hasil[i]= 'P';
                win ++;

            }else
                index.pb(i);
        }
        if(st[i] == 'S'){
            if(arr[0] > 0){
                arr[0]--;
                hasil[i]= 'R';
                win++;
            }else
                index.pb(i);
        }
    }
    if(win >= ceil((float)n/2)){
        for(auto i : index){
                if(arr[2] > 0){
                    arr[2]--;
                    hasil[i]= 'S';
                    win ++;
                }
                if(arr[1] > 0){
                    arr[1]--;
                    hasil[i]= 'P';
                    win ++;

                }
                if(arr[0] > 0){
                    arr[0]--;
                    hasil[i]= 'R';
                    win++;
                }
        }
        
        cout <<"YES\n"<< hasil << "\n";
    }else
        cout << "NO\n";

    
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}