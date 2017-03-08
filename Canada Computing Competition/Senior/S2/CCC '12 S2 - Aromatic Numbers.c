#include <stdio.h>
#include <string.h>
int main(){
	char x[50];
	scanf("%s",x);
	int total = 0;
	int num,base;
	int prebase = 0;
	int preval = 0;
	for(int i = 0;i < strlen(x);i += 2){
		num = x[i] - 48;
		if(x[i + 1] == 'I') base = 1;
		else if(x[i + 1] == 'V') base = 5;
		else if(x[i + 1] == 'X') base = 10;
		else if(x[i + 1] == 'L') base = 50;
		else if(x[i + 1] == 'C') base = 100;
		else if(x[i + 1] == 'D') base = 500;
		else if(x[i + 1] == 'M') base = 1000;
		
		if(prebase < base) total -= preval;
		else total += preval;
		prebase = base;
		preval = num * base;
	}
	total += preval;
	printf("%d",total);
	return 0;
}
