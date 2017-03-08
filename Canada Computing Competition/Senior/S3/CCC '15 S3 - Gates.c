#include <stdio.h>
int g[500001];
int main(){
    int k,n,total = 0;
    scanf("%d%d",&k,&n);
    for(int i = 1;i <= k;i++) g[i] = i;
    for(int i = 0;i < n; i++){
		int thing,pos = 0;
		scanf("%d",&thing);
		while (g[thing] != thing){
			if(pos) g[pos] = g[thing];
			pos = thing;
			thing = g[thing];
		}
		if (thing == 0) break;
		total++;
		g[thing] = thing - 1;
	}
    printf("%d",total);
    return 0;
}
