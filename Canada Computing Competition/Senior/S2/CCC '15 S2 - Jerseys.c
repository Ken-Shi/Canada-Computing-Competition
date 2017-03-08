#include <stdio.h>
int main(){
	int J,A,total = 0;
	scanf("%d\n%d\n",&J,&A);
	int j[J];
	for(int i = 0;i < J;i++){
		char x;
		scanf("%c\n",&x);
		if(x == 'S') j[i] = 1;
		else if(x == 'M') j[i] = 2;
		else j[i] = 3;
	}
	for(int i = 0;i < A;i++){
		char x;
		int num;
		scanf("%c %d\n",&x,&num);
		int temp;
		if(x == 'S') temp = 1;
		else if(x == 'M') temp = 2;
		else temp = 3;
		num--;
		if(temp <= j[num]) {
			total++;
			j[num] = 0;
		}
	}
	printf("%d",total);
	return 0;
}
