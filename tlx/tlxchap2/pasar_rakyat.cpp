#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
    return x ? gcd(y%x,x) : y;
}
int main(int argc, char const *argv[])
{
    int n;
    int people[21];

    scanf("%d",&n);
    int kpk = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&people[i]);
        kpk = kpk*people[i]/gcd(kpk,people[i]);
    }
    printf("%d\n",kpk);
    return 0;
}
