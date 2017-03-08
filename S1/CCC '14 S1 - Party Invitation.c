#include <stdio.h>
#include <string.h>
int main(){
    int k,m;
    scanf("%d%d",&k,&m);
    int a[k+1];
    for(int i = 0;i<=k;i++){
    	a[i] = 1;
    }
    //memset(a, 1, sizeof a);
    int f;
    for(int i = 1;i <= m;i++){
        scanf("%d",&f);
        int counter = 0;
        for(int j = 1;j < k+1;j++){
        	
            if(a[j] == 1) counter++;
            if(counter == f) {
                a[j] = 0;
                counter = 0;
            }
            //printf("%d ",a[j]);
        }
    }
    for(int i = 1;i <= k;i++){
        if(a[i] == 1) printf("%d\n",i);
    }
    return 0;
}
