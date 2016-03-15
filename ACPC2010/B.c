/* Made with LOVE by Najwaa Laabid, Abdelghafour Mourchid, and AHmed Leksaays
ACPC 2010
Problem B. Sum the Squares
*/
#include <stdio.h>
#include <limits.h>

long long cycle(long long n){
	long long a, result = 0;
	
		while(n > 0){
			a = n%10;
			result += a*a;
			n /= 10;
		}
	return result;
}

long long duplicates(long long cycle[], long long n, long long l){
	long long i;
	
	for(i = 1; i < l; i++)
		if(cycle[i] == n)
			return 1;
		
	return 0;
}

int main (void){
	long long a, b, l1, l2, cycle1[10000], cycle2[10000], flag, i, j, min;
	
	scanf("%lld %lld", &a, &b);
	
	while(a != 0 && b != 0){
		printf("%lld %lld ", a, b);
		l1 = 1;
		l2 = 1;
		flag = 0;
		min = INT_MAX;
	
		while(!duplicates(cycle1,a,l1)){
			cycle1[l1++] = a;
			a = cycle(a);
		}
		while(!duplicates(cycle2,b,l2)){
			cycle2[l2++] = b;
			b = cycle(b);
		}
	
		for(i = 1; i < l1; i++){
			for(j = 1; j < l2; j++){
				if(cycle1[i] == cycle2[j] && i + j < min){
					flag = 1;
					min = i + j;
				}	
			}
		}
		
		if(flag)
			printf("%lld\n", min);
		
		if(flag == 0)
			printf("0\n");
		
		scanf("%lld %lld", &a, &b);
	}

  return 0;
}
