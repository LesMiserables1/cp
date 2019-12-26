#include<bits/stdc++.h>
using namespace std;

#define pb push_back;

int main(){
    int n,st;
    string med;
    vector<int> baju;

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> st;
        baju.push_back(st);
    }

    sort(baju.begin(),baju.end());
    
    if(n % 2 == 0){
        int angka = baju[(n-1)/2] + baju[(n-1)/2 + 1];
        if(angka % 2 != 0)
        med = to_string(angka/2) + ".5"; 
        else
            med = to_string(angka/2) + ".0"; 

    }
    else
        med = to_string(baju[(n-1)/2]) + ".0";
    cout << med <<endl;
}