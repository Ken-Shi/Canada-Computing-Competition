#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		int y,m,d;
		scanf("%d%d%d",&y,&m,&d);
		if(y > 1989) printf("No\n");
		else if(y == 1989 && m > 2) printf("No\n");
		else if(y == 1989 && m == 2 && d > 27) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
