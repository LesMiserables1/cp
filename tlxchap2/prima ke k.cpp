#include<bits/stdc++.h>
using namespace std;
void generatePrime(int (&arr)[100000]){
    int x = 1;
    bool visit[1000000];
    memset(visit,true,sizeof(visit));
    for(int i = 2; i < 1000000;i++){
        if (visit[i]){
            arr[x] = i;
            x++;
            for(int j = i * 2; j<1000000; j+=i){
                visit[j] = false;
            }
        }
    }
}
int main(){
    int n,th;
    int arr[100000];
    scanf("%d",&n);
    
    generatePrime(arr);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&th);
        printf("%d\n",arr[th]);
    }
    return 0;
}
