#include <stdio.h>
#include <stdlib.h>
int comp(const void*a,const void*b)
{
	return *(int*)a-*(int*)b;
}
int comp2(const void*a,const void*b)
{
	return *(int*)b-*(int*)a;
}

int main(){
    int t,k;
    scanf("%d%d",&t,&k);
    int a[k],b[k];
    for(int i = 0;i < k;i++) scanf("%d",&a[i]);
    for(int i = 0;i < k;i++) scanf("%d",&b[i]);
    if(t == 1){
        qsort(a,k,sizeof(int),comp);
        qsort(b,k,sizeof(int),comp);
    }
    else{
        qsort(a,k,sizeof(int),comp);
        qsort(b,k,sizeof(int),comp2);
    }
    long long total = 0;
    for(int i = 0;i < k;i++){
        if(a[i] > b[i]) total += a[i];
        else total += b[i];
    }
    printf("%lld",total);
    return 0;
}

