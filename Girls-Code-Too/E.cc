/* Made with LOVE by Ahmed Lekssays
Contest : Girls Code Too
Edition : 2016
Problem : E. Music Identification
Complexity : O(N)
*/
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

const int MAX = 1003;

int main(void){
	int T, N;
	char song[MAX][MAX], key[MAX], lyrics[MAX][MAX];

	cin >> T;

	while(T--){
		cin >> N;

		for (int i = 0; i < N; i++){
			scanf(" %[^\n]",song[i]);
			scanf(" %[^\n]",lyrics[i]);
		}

		scanf("%s",key);

		int i = 0;
		while( strstr(lyrics[i],key) == 0 ){
			i++;
		}
		printf("%s\n", song[i]);
	
	}
	
	return 0;
}
