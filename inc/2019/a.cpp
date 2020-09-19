#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n;
    cin >> n;
    
    int a[101];
    int b[101];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    int rs = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] > b[i]){
            rs += 3;
        }else if(a[i] == b[i]){
            rs ++;
        }
    }
    cout << rs << endl;
}