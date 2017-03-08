#include <stdio.h>
int main(){
    int n,d;
    scanf("%d%d",&n,&d);
    if(n % d == 0 || n == 0) printf("%d", n/d);
    else{
        if(n / d != 0)printf("%d ", n/d);
        n -= d * (n/d);
        for(int i = 2;i <= n;i++){
            if(n % i == 0 && d % i == 0){
                n /= i;
                d /= i;
            }
        }
        printf("%d/%d",n,d);
    }
    return 0;
}
