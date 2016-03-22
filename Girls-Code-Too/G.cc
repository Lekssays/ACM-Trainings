/* Made with LOVE by Ahmed Lekssays
Contest : Girls Code Too
Edition : 2016
Problem : G. Leila and Coins
Complexity : O(N)
*/

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

const long long MAX = 100005;

long long num[MAX], occ[MAX];

int main(void){
	int T;
	long long N, L, R, sol;

	cin >> T;

	while(T--){
		sol = 0;

		memset(occ, 0, sizeof (occ));

		memset(num, 0, sizeof (num));

		scanf("%lld%lld%lld",&N,&L,&R);

		for (int i = 0; i < N; i++)
			cin >> num[i];

		for (int i = 0; i < N; i++){
			cin >> occ[i];
			if( num[i] >= L && num[i] <= R){
				sol += occ[i];
			}
		}

		cout << sol << endl;
	}

	return 0;
}
