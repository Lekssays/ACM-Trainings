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
	int T, N, found;
	char song[MAX][MAX], key[MAX], lyrics[MAX][MAX];

	cin >> T;

	while(T--){
		found = 0;
		cin >> N;

		for (int i = 0; i < N; i++){
			scanf(" %[^\n]",song[i]);
			scanf(" %[^\n]",lyrics[i]);
		}

		scanf("%s",key);

		for(int i = 0; i < N; i++){
			if(strstr(lyrics[i],key) != 0){
				found++;
				id = i;
			}
		}
		if(found == 1)
			printf("%s\n", song[id]);
		else
			printf("Error\n");
	
	}
	
	return 0;
}
