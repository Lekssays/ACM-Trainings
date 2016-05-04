/* Made with LOVE By Najwa Laabid, Abdelghafour Mourchid, and Ahmed Lekssays
ACPC 2014
Problem : A. Game of Peace
*/
#include <iostream>
#define SIZE 100010

using namespace std;

long long fib[SIZE];

long long gcd(long long a, long long b){
	if(a > b) return gcd(b , a);
	if(a == 0) return b;
	else return gcd(a, b % a);
}

int main(void){
	int T;
	long long a, b, x, n, y, m;

	cin >> T;

	fib[0] = 0;
	fib[1] = 1;

	for(long long i = 2; i < SIZE; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for(long long i = 0; i < T; i++){
		cin >> x >> n >> y >> m;
		a = fib[n + 1] * x + y;
		b = fib[n] * x;
		cout << "Case " << i + 1 << ": " << gcd(a, b) << endl;
	}

	return 0;
}
