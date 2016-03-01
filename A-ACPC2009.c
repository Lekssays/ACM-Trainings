/* made with love
ACPC - Arab Collegiate Programming Contest
Edition : 2009
Problem Name : [A] Seinfeld
*/
#include <stdio.h>
#include <string.h>
#define MAX 2003

// Implementing a stack using arrays
struct stack {
	char stk[MAX];
	int top;
} s;

void push(char a){
	if (s.top == MAX -1) return;
	else {
		s.top++;
		s.stk[s.top] = a;
	}
}

char pop(void){
	char a;
	if (s.top == -1) return '-';
	else {
		a = s.stk[s.top];
		s.top--;
		return a;
	}
}

int main(void){
	s.top = -1;
	char str[MAX];
	int i,j,len, cntStack, total, k = 1;

	while(str[0] != '-'){
		memset(str, 4, sizeof str); // set the array after every test case
		cntStack = 0, total = 0; // initialize the value of the counters
		scanf("%s",str);
		len = strlen(str);	
		for(i = 0; i < len ; i++){
			if ( str[i] == '}' && s.top == -1){
				push(str[i]);
				total++; // add to operating -> we converted } to { because hte stack is empty
			} else if( str[i] == '}' && s.top != -1) pop();
			else push(str[i]);
		}

		while( s.top != -1){ // add the remaining { in the stack -> They ll always be even, so we devide by 2 to match every two pairs
			pop();
			cntStack++;
		}
		
		if(str[0] == '-') break;
		else { 
			printf("%d. %d\n",k, total + ( cntStack / 2));
			k++;
		}
	}		
	
	return 0;
}
