/* Made with LOVE
UVa Online Judge
Problem Name: 8 Queens Problem / ID : 750
Time Complexity : O(n!)
Link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=691
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 102

int row[MAX],T,lineCnt,a,b;

int place(int r, int c){
	int prev;
	for (prev = 0; prev < c; prev++){
		if (row[prev] == r || abs(row[prev] - r) == abs(prev - c))
			return 0;
	}
	return 1;
}

void backtrack(int c){
	int j,r;
	if ( c == 8 && row[b] == a){
		printf("%2d      %d",++lineCnt, row[0] + 1 );
		for (j = 1; j < 8; j++){
			printf(" %d", row[j] + 1);
		}
		printf("\n");
	}
	for (r = 0; r < 8; r++){
		if(place(r,c) == 1){
			row[c] = r;
			backtrack(c + 1);
		}
	}
}

int main(void){
	
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		b--;
		a--;
		lineCnt = 0;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		backtrack(0); 
		printf("\n");		
	}
	return 0;	
}
