/* Made with love 
ACPC 2013
Problem: F - NASSA's Robot
*/
#include <stdio.h>
#include <string.h>
#define MAX 100003

int xmax , ymax, xmin, ymin, T, len, i, y , x, flag = 0;
char str[MAX];

int main(void){

	scanf("%d",&T);
	while(T--){
		memset(str, 4, sizeof str);
		scanf("%s",str);
		len = strlen(str);
		xmin = 0, xmax = 0, ymax = 0, ymin = 0, y = 0, x = 0;
		for(i = 0; i < len; i++){
			if( str[i] == 'U') y++;
			else if( str[i] == 'D') y--;
			else if( str[i] == 'R') x++;
			else if ( str[i] == 'L') x--;
		}
		xmin = x, xmax = x, ymin = y, ymax = y;
		for (i = 0; i < len; i++){
			if ( str[i] == '?'){
				ymax++;
				ymin--;
				xmax++;
				xmin--;
				flag = 1;
			}
		}

		if(flag == 1)
			printf("%d %d %d %d\n",xmin, ymin, xmax, ymax);
		else 
			printf("%d %d %d %d\n",x,y,x,y);
	}
	return 0;
}
