/* Made with love */
#include <stdio.h>
#include <string.h>
#define MAX 100002

int i,T,enc_c[26],orig_c[26],orig_l,enc_l,v;
char enc[MAX],orig[MAX];

int check(int enc_c[], int orig_c[]){
	for(int i = 0; i < 26; i++){
		if(enc_c[i] != orig_c[i])
			return 0;
	}
	return 1;	
}

int main(void){

	scanf("%d",&T);

	for(v = 0; v < T; v++){ 
		i = 0;
		scanf("%s",enc);
		scanf("%s",orig);
		memset(orig_c, 0, sizeof orig_c);
		enc_l = strlen(enc);
		orig_l = strlen(orig);

		for (i = 0; i < orig_l; i++){
			orig_c[orig[i] - 'a']++;
		}
		
		memset(enc_c, 0, sizeof enc_c);
		for (i = 0; i < orig_l; i++){
			enc_c[enc[i] - 'a']++;
		}

		if ( check( enc_c, orig_c) == 1 ){
			printf("YES\n");
			//break;
		} else if( enc_l == orig_l){
			printf("NO\n");
			//break;
		}

		for (i = orig_l; i < enc_l; i++){
			enc_c[ enc[i - orig_l ] - 'a' ]--;
			enc_c[ enc[i] - 'a' ]++;
			if (check(enc_c,orig_c) == 1){
				printf("YES\n");
				break;
			} else if( i == enc_l - 1){
				printf("NO\n");
				break;
			}
		}
		
	}

	return 0;
}
