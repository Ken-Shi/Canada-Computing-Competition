#include <stdio.h>
#include <string.h>
int main(){
    int k;
    scanf("%d",&k);
    int a[k];
    memset(a,sizeof a,0);
    for(int i = 0;i < k;i++){
        scanf("%d",&a[i]);
        if(a[i] == 0)
            for(int j = i;j >= 0;j--){
                if(a[j] != 0){
                    a[j] = 0;
                    break;
                }
            }
    }
    int sum = 0;
    for(int i = 0;i < k;i++){
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}
