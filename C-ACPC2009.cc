/* Made with LOVE by Najwa Laabid, Abdelghafoue Mourchid, and Ahmed Lekssays
ACPC Edition: 2009
Problem: C - Not So Flat After All
*/
#include <iostream>
#include <cstdlib>
#define SZ 1000000

int power[2][SZ];
int sum [SZ];

using namespace std;

void prime_fact(int n, int ind){
	int i;
	while(n % 2 == 0){
		n /= 2;
		power[ind][2]++;
	}
	i = 3;
	while(n != 1){
		while(n % i == 0){
			n /= i;
			power[ind][i]++;
		}
		i += 2;
	}
}

int distance(void){
	int result = 0;
	for(int i = 1; i <= SZ; i++) result += abs(power[0][i] - power[1][i]);
	return result;
}

int main (void){
	int a, b, k = 0;

	do{
		cin >> a >> b;
		
		for(int i = 1; i <= SZ; i++){
			power[0][i] = 0;
			power[1][i] = 0;
			sum[i] = 0;
		}
	
		if(a == 0 && b == 0) return 0;
		else {
			k++;
			prime_fact(a,0);
			prime_fact(b,1);
			
			int d = distance();
					
			for (int u = 1; u <= SZ; u++) sum[u] = power[0][u] + power[1][u];
					
			int cnt = 0;	
			for (int u = 1; u <= SZ; u++){
				if(sum[u] != 0)
					cnt++;
			}
			cout << k << ". " << cnt << ":" << d << endl;
		}	
	} while(true);
	
	return 0;
}
