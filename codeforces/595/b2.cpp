#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define rep1(i,n) for (int i = 1; i <= n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
typedef vector<int> vi;

vi level,p;

void init(int n){
    level.assign(n+1,1);
    p.assign(n+1,0);
    rep1(i,n){
        p[i] = i;
    }
}
int findset(int i){
    return i == p[i] ? p[i] : p[i] = findset(p[i]); 
}
int sameset(int i,int j){
    return findset(i) == findset(j);
}
void unionset(int i,int j){
    if(!sameset(i,j)){
        int x = findset(i);
        int y = findset(j);
        
        p[x] = y;
        level[y]++;
    }
}
void solve(){
    int n,arr[200001];
    cin >> n;
    init(n);
    rep1(i,n){
        cin >> arr[i];
    }
    rep1(i,n){
        int c = arr[i];
        int x = i;
        if(p[i] == i){
            unionset(c,i);
            while(c != i){
            x = c;
            c = arr[c];
            unionset(c,x);
            }
        }
       
        cout << level[findset(i)] << " ";
    }
    cout << endl;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}