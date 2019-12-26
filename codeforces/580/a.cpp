#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int bil,n,m,max = 0,max1 = 0 ;

    scanf("%d",&m);
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&bil);
        if(max < bil){
            max = bil;
        }
    }
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&bil);
        if(max1 < bil){
            max1 = bil;
        }
    }
    printf("%d %d\n",max,max1);
}