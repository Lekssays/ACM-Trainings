/* Made with love
ACPC 2014
Problem : B - Let’s Play Tawla
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char * names (int a){
	switch(a){
		case 1: return "Yakk"; break;
		case 2: return "Doh"; break;
		case 3: return "Seh"; break;
		case 4: return "Ghar"; break;
		case 5: return "Bang"; break;
		case 6: return "Sheesh"; break;
		default: return "0";
	}
}

const char * pairs (int a){
	switch(a){
		case 1: return "Habb Yakk"; break;
		case 2: return "Dobara"; break;
		case 3: return "Dousa"; break;
		case 4: return "Dorgy"; break;
		case 5: return "Dabash"; break;
		case 6: return "Dosh"; break;
		default: return "0";
	}
}

int main(void){
	int a , b , i, T;
	scanf("%d",&T);
	int k = 1;
	while(T--){
		scanf("%d%d",&a,&b);
		if( a * b == 30) printf("Case %d: Sheesh Beesh\n",k);
		else if( a > b) {
			printf("Case %d: %s %s\n", k, names(a),names(b));
		}
		else if( b > a) printf("Case %d: %s %s\n",k , names(b),names(a));
		else if( a == b) printf("Case %d: %s\n",k , pairs(a));
		k++;
	}
	return 0;
}
