#include<bits/stdc++.h>
using namespace std;

long long gcd (long long x,long long y){	
    return x ? gcd(y%x,x) : y; 
}
int main() {
	long long a,b,c,d,fpb1;
	cin >>a>>b>>c>>d;
	a = a*d + c*b;
	b = b*d;
	fpb1 = gcd(a,b);
    printf("%lli %lli\n",a/fpb1,b/fpb1);
} 
