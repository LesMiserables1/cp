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
        unordered_map<int,int> nilai;
        cin >> n;
        loop(j,1,n+1){
            int x;
            cin >> x;
            nilai[j] = x;
        }
      loop(j,1,n+1){
            int x = j;
            int cx = 1;
            while(nilai[x] != j){
                auto itr = nilai.find(x);
                x = itr->second;
                cx++;
            }
            cout << cx << " ";
        }
        cout << endl;
    }
}