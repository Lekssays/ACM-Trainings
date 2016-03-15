/* Made with LOVE by Najwaa Laabid, Abdelghafour Mourchid, and AHmed Leksaays
ACPC 2011
Problem A. Arabic and English
*/
#include <stdio.h>

int main (void){
	int T, N, i, j, ind, flag;
	char text[110][15];
	
	scanf("%d",&T);
	
	for(i = 0; i < T; i++){
		scanf("%d",&N);
		ind = -1;
		
		for(j = 0; j < N; j++){
			scanf("%s",text[j]);
			if(ind != -1)
				printf("%s ", text[j]);
			if(97 <= text[j][0] && text[j][0] <= 122){
				ind = j;
			}
		}
		
		if(ind != -1){
			printf("%s", text[ind]);
			for(j = 0; j < ind; j++)
				printf(" %s", text[j]);
		}
		else{
			for(j = 0; j < N - 1; j++)
				printf("%s ", text[j]);
			
			printf("%s", text[N - 1]);
		}
			
		printf("\n");
	}
	
	return 0; 
}
