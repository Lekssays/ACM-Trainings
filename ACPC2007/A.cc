/* Made with LOVE by Najwa Laabid, Abdelghafour Mourchid, and Ahmed Lekssays
ACPC 2007 - Arab Collegiate Programming Contest 
Problem: [A] Judging Olympia
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int cmp(const void *a, const void *b){
	return (*( int* ) a - *(int* ) b);
	}

int main (void){
	int N[6];

while(true){
	for(int i=0; i<6; i++)
		cin >> N[i];
	
	int sum = 0;
		for(int i=0; i<6; i++)
			sum+= N[i];
			
		if (sum == 0)
			return 0;
	
	qsort(N, 6, sizeof(int), cmp);
	
	double avg = 0;
	for(int i=1; i<5; i++)
		avg += N[i];
	
	avg = avg / 4;
	
	cout << avg << endl;

	}

	return 0;
}
