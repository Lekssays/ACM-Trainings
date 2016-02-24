/* Made with love 
ACPC Edition : 2009
Problem : [B] Tiles of Tetris, NOT!
*/
#include <iostream>

using namespace std;

long long gcd(long long a , long long  b ){
	if( b == 0 )
		return a;
	else
		return gcd( b, a % b);
}

int main (void){
	long long a, b;
	
	do {
		long long ans = 0;
		
		cin >> a >> b;
		
		if(a == 0 && b == 0) return 0;
		
		if (a == b) cout << 1 << endl;
		else {
			ans = ( a * b ) / gcd ( a , b);
			if( a == ans || b == ans) cout << ans / min ( a , b ) << endl;
			else cout << ans << endl;
		}
		
	} while(true);
	
	return 0;
}