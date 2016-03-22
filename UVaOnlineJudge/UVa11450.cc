/* Made with LOVE
UVa Online Judge
ID : 11450
Problem Name : Wedding shopping
*/
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 203;
const long long INF = 1e9;
int dp[MAX][MAX], prices[MAX][MAX];
int T, M, C, sol;

int buy(int m, int g){
	if( m < 0) return -1 * INF;
	if(g == C ) return M - m;
	int &ans = dp[m][g];
	if( ans != -1 ) return ans;
	for (int i = 1; i <= prices[g][0]; i++){
		ans = max(ans, buy(m - prices[g][i], g + 1));
	}
	return ans;

}
int main(void){

	cin >> T;

	while(T--){
		scanf("%d%d",&M, &C);
		for (int i = 0; i < C; i++){
			cin >> prices[i][0];
			for (int j = 1; j <= prices[i][0]; j++)
				cin >> prices[i][j];
		}
		memset(dp, -1, sizeof(dp));
		sol = buy(M, 0);
		if( sol < 0) puts("no solution");
		else cout << sol << endl;
	}

	return 0;
}
