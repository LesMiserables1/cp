// A C++ program to count all possible paths from 
// top left to top bottom using combinatorics 
#include <iostream> 
using namespace std; 
long long numberOfPaths(long long m, long long n) 
{ 
	// We have to calculate m+n-2 C n-1 here 
	// which will be (m+n-2)! / (n-1)! (m-1)! 
	long long path = 1; 
	for (long long i = m+1; i <= (m+n); i++) { 
		path *= i;
		path /= (i - m ); 
	} 
	return path; 
} 

// Driver code 
int main() 
{ 
    int T; cin >> T;
    while(T--){
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        long long m = (c-a) + (d-b);
        long long n = max((c-a),(d-b));
        m -= n;
	    cout << numberOfPaths(m,n) << endl; 
    }
	return 0; 
}
