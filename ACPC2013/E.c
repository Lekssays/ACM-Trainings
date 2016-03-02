/* Made with LOVE 
ACPC 2013 - Arab Collegiate Programming Contest
Problem : E. Balloons Colors
*/
#include <stdio.h>
#include <string.h>

int main(void){
	int T, N, X , Y, arr[102], i;

	scanf("%d", &T);

	while(T--){
		scanf("%d%d%d",&N,&X,&Y);
		memset(arr, 4, sizeof arr);
		for ( i = 0; i < N; ++i){
			scanf("%d",&arr[i]);
		}

		if(arr[0] == X && arr[N-1] != Y) printf("EASY\n");
		else if(arr[0] == X && arr[N-1] == Y) printf("BOTH\n");
		else if(arr[0] != X && arr[N-1] == Y) printf("HARD\n");
		else printf("OKAY\n");
	}

	return 0;
}
