/* Made ith LOVE by Najwa Laabid, Abdelghafour Mourchid, and Ahmed Lekssays
ACPC 2004
Problem: B - F of a and b to the k*/
#include <stdio.h>

int main (void){
	long long K, V, i, j, k, a, b, x, y, flag = 0, temp;

	scanf("%lld %lld",&V,&K);
	
	while(K != 0 || V != 0){
		if(K == 0 && V < 10 ){
			a = V;
			b = V;
			printf("f^0(%lld,%lld)=%lld\n",a,b,V);
		}
		else{
			for(a = 1; a < 10; a++){
				for(b = a; b < 10; b++){
					x = a;
					y = b;
					if(a == V){
						printf("f^0(%lld,%lld)=%lld\n",a,b,V);
						flag = 1;
					}
					else if(b == V){
						a = b;
						printf("f^0(%lld,%lld)=%lld\n",a,b,V);
						flag = 1;
					}
					else {
						for(k = 2; k <= K; k++){
							if(x + y == V){
								printf("f^%lld(%lld,%lld)=%lld\n",k,a,b,V);
								flag = 1;
								break;
							}
							temp = y;
							y = x + y; 
							x = temp;
						}
					}
					if(flag == 1)
						break;
				}
				if(flag == 1)
					break;
			}
			
			if(flag == 0)
				printf("no solution for <%lld,%lld>\n",V,K);
			
			flag = 0;
		}
		scanf("%lld %lld",&V,&K);
	}

	return 0;
}
