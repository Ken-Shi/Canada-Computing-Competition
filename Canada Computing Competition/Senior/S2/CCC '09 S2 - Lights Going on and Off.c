#include <stdio.h>
int a[30],b[8],c[256];
int main(){
	int r,l;
	scanf("%d%d",&r,&l);
	b[0] = 1;
	for(int i = 1;i <= 7;i++) b[i] = b[i - 1] * 2;
	for(int i = 1;i <= r;i++){
		for(int j = l - 1;j >= 0;j--){
			int n;
			scanf("%d",&n);
			a[i] += n * b[j];
		}
	}
	int x = a[r];
	c[x] = 1;
	for(int i = r - 1;i >= 1;i--){
		x ^= a[i];
		c[x] = 1;
	}
	int total = 0;
	for(int i = 0;i < 256;i++) if(c[i] == 1) total++;
	printf("%d",total);
	return 0;
}
