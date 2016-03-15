/* Made with LOVE by Najwaa Laabid, Abdelghafour Mourchid, and AHmed Leksaays
ACPC 2013
Problem I. Omar Loves Candies
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#define size 1100

int grid[size][size];

int getSum(int topX, int topY, int bottomX, int bottomY){
	int i, j, sum = 0;
	for(i = bottomX; i >= topX; i--)
		for(j = bottomY; j >= topY; j--)
			sum += grid[i][j];
	return sum;
}

int main (void){
	int score, t, n, m, i, j, k, x, max, maxScore, ind, sum;
	
	scanf("%d",&t);
	
	for(k = 0; k < t; k++){
		scanf("%d %d", &n, &m);
		
		for(i = 0; i < n; i++){
			sum = 0;
			for(j = 0; j < m; j++){
				scanf("%d", &grid[i][j]);
				sum += grid[i][j];
				grid[i][j] = sum;
			}
		}

		sum = 0;
		maxScore = -2010;
		for(i = n - 1; i >= 0; i--){
			sum += grid[i][ m - 1];
			if(sum > maxScore)
				maxScore = sum;
		}

		for(x = 1; x <= m-1; x++){
			sum = 0;
			max = -2010;
			for(i = n - 1; i >= 0; i--){
				sum += grid[i][m - 1] - grid[i][m - x - 1];
				if(sum > max)
					max = sum;
			}
			if(max > maxScore)
				maxScore = max;
		}
	
		printf("%d\n", maxScore);
	}
	
	return 0;
}
