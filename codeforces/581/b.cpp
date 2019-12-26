#include<bits/stdc++.h>
using namespace std;
int r;
int generatePow(int n){
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += pow(2,i);
    }
    if(n == -1)
        count = r-2;
    return count;
    
}
int main(){
    int n,l;
    
    cin >> n >> l >> r;
    int min = (n - l) + 1 + generatePow(l-1);
    int max =  ((n - r) + 1)*pow(2,r-1) +  generatePow(r-2) + 1;
    
    cout << min << " " <<  max << '\n';
}