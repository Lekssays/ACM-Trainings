/* Made with LOVE by Ahmed Lekssays
Contest : Girls Code Too
Edition : 2016
Problem : I. Missing Episode
Complexity : O(N)
*/

#include <cstdio>
#include <iostream>

using namespace std;

const int MAX = 100004;

int main(void){
	int T, epi[MAX], n, sum, sol;

	cin >> T;

	while(T--){
		sol = 0, sum = 0;

		cin >> n;

		for (int i = 0; i < n - 1; i++){
			cin >> epi[i];
			sum += epi[i];
		}
		
		// Sum of numbers between 1 and N is : S = ( N * (N + 1) / 2) : Gauss Theorem
		sol = (n * ( n + 1 ) / 2) - sum;
		cout << sol << endl;
		 
	}

	return 0;
}
