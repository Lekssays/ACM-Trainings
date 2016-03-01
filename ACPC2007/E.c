/* Made with LOVE by Najwaa Laabid, Abdelghafour Mourchid, and Ahmed Lekssays
Edition : ACPC 2007
Problem: [E] Fermat’s Chirstmas Theorem
*/
#include <stdio.h>
#define size 1000000
#define size1 79000

int isPrime(long long a){
	long long  i;
	
	if( a < 2 )
		return 0;
		
	if(a % 2 == 0)
		return 0;
		
		for(i = 3; i * i <= a; i += 2)
			if(a % i == 0)
				return 0;
		return 1;
}

int main (void){
	long long  a, b;
	int  i, y, prime[size1], j = 1, t1, t2, k;
	
	scanf("%lld %lld",&a,&b);
	
	prime[0] = 2;
	
	for(i = 3; i <= size-1; i += 2){
		if(isPrime(i))
		prime[j++] = i;
	}	
	
	while(a != -1 || b != -1){
		printf("%lld %lld ",a, b);
		 
		y = 0;	
		k = 0;
			
	  if( a <= 2 && b >= 2)
			y = 1;
			
		while (a > prime[k])
			k++;
			
		t1 = k;
		
		while (b >= prime[k])
			k++;
			
		t2 = k;
		
		printf("%d ", t2 - t1);
		
		for(i = t1; i < t2; i++)
			if( (prime[i] - 1) % 4 == 0)
				y++;
		
		printf("%d\n",y);
		
		scanf("%lld %lld",&a,&b);
	}
	
	return 0;
}
