/* Made with LOVE by Ahmed Lekssays
Contest : Girls Code Too
Edition : 2016
Problem : B. Flower Graphs
Complexity : O(N^2)
*/

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

const int MAX = 1000, mod = 1000000007;

long long xy[MAX][3], edges[MAX] = {0}, vert[MAX];

long long fact(long long a){
	long long fact = 1;
	if(a == 1) return 1;
	else {
		for (int i = 1; i <= a; ++i)
			fact *= i;
		
		return fact;
	}
}

int main(void){
	long long T, n, m, sol, d;

	cin >> T;
	
	while(T--){
		memset(vert, 0, sizeof (long long));
		memset(edges, 0, sizeof (long long));
		memset(xy, 0, sizeof (long long));
		sol = 0;
		scanf("%lld%lld%lld",&n,&m,&d);

		for(int i = 0; i < m; i++)
			scanf("%lld%lld",&xy[i][0],&xy[i][1]);

		for(int i = 0; i < n; i++)
			vert[i] = i + 1;
			
		for(int i = 0; i < m; i++){
			for(int j = 0; j < m; j++){
				if(vert[i] == xy[j][0] || vert[i] == xy[j][1])
					edges[i]++;
			}
		}

		for (int i = 0; i < n; i++)
			sol += fact( edges[i] ) / ( fact( edges[i] - d ) * fact( d ) );
		
		cout << sol % mod << endl;
	}

	return 0;
}
