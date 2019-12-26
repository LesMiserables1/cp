#include<bits/stdc++.h>
using namespace std;

const int N = 1e+3 + 3;
int tinggi[N];

int main(){
    int n,k;
    
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> tinggi[i];
    }
    sort(tinggi,tinggi+n);
    cout << tinggi[k-1] << endl;
}