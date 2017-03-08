#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n + 1],b[n + 1];
	int i;
	for(i = 0;i < n;i++){
		scanf("%d",&a[i + 1]);
	}
	for(i = 0;i < n;i++){
		scanf("%d",&b[i + 1]);
	}
	int ta = 0,tb = 0;
	int max = 0;
	for(i = 1;i <= n;i++){
		ta += a[i];
		tb += b[i];
		if(ta == tb) max = i;
	}
	printf("%d",max);
	return 0;
}
