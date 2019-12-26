#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    rep(i,tc){
        int n;
        vector <pair<int,bool>> nilai;
        cin >> n;
        rep(j,n){
            int x;
            cin >> x;
            nilai.pb(mp(x,1));
        }
        sort(nilai.begin(),nilai.end());
        int cx = 0;
        
        rep(j,n){
            if(nilai[j].second){
                nilai[j].second = 0;
                int x = nilai[j].first;
                loop(k,j+1,n){
                    if(nilai[k].second){
                        if(x - nilai[k].first != -1){
                            nilai[k].second = 0;
                            x = nilai[k].first;
                        }
                    }
                }
                cx++;
            }
            
        }
        cout << cx << endl;
    }

}