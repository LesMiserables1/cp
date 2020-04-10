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
    int arr[100000];
    int arr2[100000];
    rep(i,n){
        cin >> arr[i];
    }
    rep(i,n){
        cin >> arr2[i];
    }
    int hsl = 0;
    rep(i,n){
        loop(j,i+1,n-1){
            if(arr[j]-arr2[j] > arr2[i]-arr[i]){
                hsl++;
            }
        }
    }
    cout << hsl << endl;
}
