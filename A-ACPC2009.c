/* made with love
ACPC - Arab Collegiate Programming Contest
Edition : 2009
Problem Name : [A] Seinfeld
*/
#include <stdio.h>
#include <string.h>
#define MAX 2003

struct stack {
	char stk[MAX];
	int top;
} s;

void push(char a){
	if (s.top == MAX -1)
		return;
	else {
		s.top++;
		s.stk[s.top] = a;
	}
}

char pop(void){
	char a;
	if (s.top == -1)
		return '-';
	else {
		a = s.stk[s.top];
		s.top--;
		return a;
	}
}

int main(void){
	s.top = -1;
	char str[MAX];
	int i,j,len, T, cntStack, total, k;

	scanf("%d",&T);
	k = 1;
	while(str[0] != '-' && s.top == -1){
		memset(str, 4, sizeof str);
		cntStack = 0, len = 0; total = 0;
		scanf("%s",str);
		len = strlen(str);	
		for(i = 0; i < len ; i++){
			if ( str[i] == '}' && s.top == -1){
				push(str[i]);
				total++;
			} else if( str[i] == '}' && s.top != -1){
				pop();
			} else if( str[i] == '{'){
				push(str[i]);
			}			
		}

		while( s.top != -1){
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
