/* Made with love
ACPC 2014
Problem G. Special Christmas Tree
*/
#include <stdio.h>

typedef long long int LL ;

LL T, H, L;

int main(void){
	scanf("%lld",&T);
	int k = 1, i;
	while(T--){
		scanf("%lld%lld",&H,&L);
		LL nodes = 0;
		for(i = 0; i < H + 1 ; ++i){
			if(1LL << i >= L) {
				nodes += ( H - i + 1 ) * L;
				break;
			} else {
				nodes += 1LL << i;
			}
		}
		printf("Case %d: %lld\n",k,nodes);
		k++;
	}
	return 0;
}
