#include <stdio.h>
int main(){
    int max,n;
    scanf("%d%d",&max,&n);
    //printf("%d ",max);
    int total = 0;
    int amount = 0;
    int pos = 0;
    int a[n];
    int flag = 0;
    if(n <= 4) {
        for(int i = 0;i < n;i++){
            scanf("%d",&a[i]);
            total += a[i];
        }
        if(total > max) printf("0");
        else printf("%d",n);
    }else{
        for(int i = 0;i < 4;i++){
            scanf("%d",&a[i]);
            //printf("%d ",a[i]);
            total += a[i];
            if(total > max) {
                printf("%d",amount);
                flag = 1;
                break;
            }
            else amount++;
        }
        if(total > max && flag == 0) printf("%d",amount);
        else {
            pos = a[0];
            amount = 4;
            for(int i = 4;i < n;i++){
                total -= pos;
                pos = a[i - 3];
                scanf("%d",&a[i]);
                total += a[i];
                if(total > max) {
                    break;
                }else{
                    amount ++;
                }
            }
            if(flag == 0)printf("%d",amount);
        }
    }
    return 0;
}
