/* Made with love 
ACPC 2013
Problem: F - NASSA's Robot
*/
#include <stdio.h>
#include <string.h>
#define MAX 100003

int T, len, i, y , x, cnt;
char str[MAX];

int main(void){

	scanf("%d",&T);
	while(T--){
		memset(str, 4, sizeof str);
		scanf("%s",str);
		len = strlen(str);
		cnt = 0, y = 0, x = 0;
		for(i = 0; i < len; i++){
			if( str[i] == 'U') y++;
			else if( str[i] == 'D') y--;
			else if( str[i] == 'R') x++;
			else if ( str[i] == 'L') x--;
			else cnt++;
		}

		printf("%d %d %d %d\n",x - cnt, y - cnt , x + cnt , y + cnt);

	}
	return 0;
}
