#include <bits/stdc++.h>
using namespace std;

bool primeChecker(int x)
{
    if (x <= 2)
    {
        if (x == 2)
        {
            return true;
        }
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, x = -1;
    int prima[1000], jumlah[1000];
    scanf("%d", &n);

    if (primeChecker(n))
    {
        printf("%d\n", n);
    }
    else
    {
        int bil = n;
        for (int i = 2; i <= n/2; i++)
        {
            if (primeChecker(i)) {
                if (bil % i == 0)
                x++;
                while (bil % i == 0)
                {
                    prima[x] = i;
                    jumlah[x]++;
                    bil = bil / i;
                }
            }
        }
        for (int i = 0; i < x; i++)
        {
            if (jumlah[i] != 1){
                printf ("%d^%d x ",prima[i],jumlah[i]);
            }else{
                printf ("%d x ",prima[i]);
            }
        }
        if (jumlah[x] != 1){
                printf ("%d^%d\n",prima[x],jumlah[x]);
            }else{
                printf ("%d\n",prima[x]);
            }
        }
}