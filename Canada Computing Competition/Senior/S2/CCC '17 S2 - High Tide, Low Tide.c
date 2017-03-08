#include <stdio.h>
#define max 1000000
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int cmpfunc2 (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],i;
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	qsort(a, n, sizeof(int), cmpfunc);
	qsort(b, n, sizeof(int), cmpfunc2);
	int mid = n / 2;
	int p1 = mid - 1;
	if(n % 2 == 1) {
		printf("%d ",a[mid]);
		for(i = 0;i < mid;i++){
			printf("%d %d ",b[p1],a[p1]);
			p1--;
		}
	}
	else for(i = 0;i < mid;i++){
		printf("%d %d ",a[p1],b[p1]);
		p1--;
	}
	return 0;
}
