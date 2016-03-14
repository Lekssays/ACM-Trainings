/* Made with LOVE by Najwa Laabid, Abdelghafoue Mourchid, and Ahmed Lekssays
ACPC 2011
Problem C. Circleland
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#define MAX 1000000003

using namespace std;

int main (void){
    int T, N;

    cin >> T;

    while (T--){
        cin >> N;
        int dis[N][2], arr[N];
        for(int i = 0; i < N; i++)
            scanf("%d",arr[i]);

		memset(dis, 0, sizeof dis);

		int sum = 0;
		for(int i = 0; i < N - 1; i++){
			sum += arr[i];
			dis[i + 1][0] = sum;  // equals sum not arr[i]
		}

		sum = 0;
		for(int i = N - 1; i > 0; i--){ 
			sum += arr[i];
			dis[i][1] = sum;
		}
		
		int sol = MAX;
		
		for(int i = 0; i < N; i++){
			int sum1 = dis[i][0],sum2 = dis[(i + 1) % N][1];
			sol = min(sol , ( ( min(sum1 ,sum2) * 2) + max(sum1, sum2) ) );
		}

        printf("%d\n", sol);
    }

    return 0;
}
