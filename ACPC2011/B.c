/* Made with LOVE by Najwaa Laabid, Abdelghafour Mourchid, and Ahmed Leksaays
ACPC 2011
Problem B. Between the Mountains
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	long long t, n1, n2, mont1[1010], mont2[1010], i, j, min, k;
	
	scanf("%lld", &t);
	
	for(i = 0; i < t; i++){
		min = 1000010;
		scanf("%lld", &n1);
		for(j = 0; j < n1; j++)
			scanf("%lld", &mont1[j]);
		
		scanf("%lld", &n2);
		for(j = 0; j < n2; j++)
			scanf("%lld", &mont2[j]);
		
		for(j = 0; j < n1; j++){
			for(k = 0; k < n2; k++){
				if(abs(mont1[j]-mont2[k]) < min)
					min = abs(mont1[j] - mont2[k]);
				if(min == 0)
					break;
			}
			if(min == 0)
				break;
		}
		printf("%lld\n", min);
	}
	
return 0;}
