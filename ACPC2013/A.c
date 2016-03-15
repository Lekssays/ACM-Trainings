/* Made with LOVE by Najwaa Laabid, Abdelghafour Mourchid, and AHmed Leksaays
ACPC 2013
Problem A. The Alphabet Sticker
*/
#include <stdio.h>
#include <string.h>
#define size 10010
#define mod 1000000007

int main (void){
	long long  t, i, mark[size], answer, j, cnt, len, indS, indE, sizeMark, flag = 1;
	char sticker[size];

	scanf("%lld",&t);
	
	for(i = 0; i < t; i++){
		
		scanf("%s", sticker);
		cnt = 0;
		len = strlen(sticker);
		sizeMark = 0;
		answer = 1;
		
		for(j = 0; j < size; j++)
			mark[j] = 1;
		
		for(j = 0; j < len; j++){
			cnt = 0;
			flag = 0;
			indS = -1;
			indE = len; 
			
			while(j < len && sticker[j] == '?'){
				cnt++;
				if(indS == -1){
					indS = j;
					indE = indS;
				}
				else
					indE = j;
				j++;
				flag = 1;
			}
			if(flag){
				if(indE == len - 1 || indS - 1 < 0 || sticker[indS - 1] == sticker[indE + 1]){
					mark[sizeMark++] = 1;
				}
				else if(sticker[indS - 1] != sticker[indE + 1]){
					mark[sizeMark++] = cnt + 1;
				}
			}
		}
	
		for(j = 0; j < sizeMark; j++){
			answer = (answer * mark[j]) % mod;
		}
		
		printf("%lld\n",answer);
	}
	
    return 0;
}
