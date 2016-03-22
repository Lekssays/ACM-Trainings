/* Made with LOVE by Ahmed Lekssays
Contest : Girls Code Too
Edition : 2016
Problem : C. Shortest Route
Complexity : O(N)
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
	int T, N, M;

	cin >> T;

	while(T--){
		scanf("%d%d",&N,&M);
		printf("%d\n", max(N,M));
	}

	return 0;
}
