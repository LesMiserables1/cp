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
    int arr[10000];
    rep(i,n){
        cin >> arr[i];
    }
    unordered_set<int> hsl;
    rep(i,n-1){
        int k = i+1;
        for(int j = 0; j < n && k < n; j++){
            if(arr[k]-arr[j] == i+1){
                hsl.emplace(k);
                hsl.emplace(j);
            }
            k++;
        }
    }
    int sum = 0;
    vector<int> cp(hsl.size());
    copy(hsl.begin(),hsl.end(),cp.begin());
    sort(cp.begin(),cp.end());

    unordered_set<int> st;
    rep(i,cp.size()-1){
        if(arr[cp[i+1]]-arr[cp[i]] == cp[i+1]-cp[i]){
            st.emplace(cp[i]);
            st.emplace(cp[i+1]);
        }
    }
    for(auto i : st){
        deb(i);
        sum = sum + arr[i];
    }
    cout << sum << endl;
}