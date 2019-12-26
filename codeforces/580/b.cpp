#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    int m;
    long long hasil = 0;
    int neg = 0;
    int nol = 0;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(m == 0 ){
            nol++;
            continue;
        }  
        hasil += abs(m) - 1;
        if(m < 0 ){
            neg++;
        }
    }
    hasil += nol;
    if(neg % 2 != 0 && nol == 0){
        hasil += 2;
    }
    cout << hasil << endl;    
}