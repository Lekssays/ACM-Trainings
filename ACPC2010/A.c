/* Made with love 
ACPC 2010
Problem: A - What's Next? 
*/
#include <stdio.h>

int main(void){
	long long int a , b , c, rem, plus;
	
	scanf("%lld%lld%lld",&a,&b,&c);

	while(1){
		if(a == 0 && b == 0 && c == 0) return 0;
		else if(b - a == c - b){
			plus = b - a;
			printf("AP %lld\n", c + plus);
		} else {
			rem = c / b;
			printf("GP %lld\n", c * rem);
		}
		scanf("%lld%lld%lld",&a,&b,&c);		
	}

	return 0;
}
