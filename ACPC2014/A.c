/* Made with LOVE By Najwa Laabid, Abdelghafour Mourchid, and Ahmed Lekssays
ACPC 2014
Problem : A. Game of Peace
*/
#include <stdio.h>
#define size 100010

long long gcd(long long a, long long b){
	if(a > b)
		return gcd( b, a);
	if(a == 0)
		return b;
	else
		return gcd(a, b % a);
}

int main (void){
	long long t, i, m, n, x, y, a,b, fib[size], gcdA[size], j;
	
	scanf("%lld",&t);

	fib[0] = 0;
	fib[1] = 1;
	
	for(i = 2, j = 0; i < size; i++, j++)
		fib[i] = fib[i-1] + fib[i-2];
		
	for(i = 0; i < t; i++){
		scanf("%lld %lld %lld %lld",&x,&n,&y,&m);
		
		a = fib[ n + 1 ] * x + y;
		b = fib[ n ] * x;
		
		printf("Case %lld: %lld\n", i+1, gcd( a ,b ));
	}
	
  return 0;
}
