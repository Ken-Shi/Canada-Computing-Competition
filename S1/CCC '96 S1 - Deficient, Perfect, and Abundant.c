#include <stdio.h>
int judge(int n){
    int sum = 0;
    for(int i = 1;i < n;i++){
        if(n % i == 0) sum += i;
    }
    if(sum == n) return 1;
    else if(sum > n) return 2;
    else return 0;
}
int main(){
    int k;
    scanf("%d",&k);
    for(int i = 0;i < k;i++){
        int n;
        scanf("%d",&n);
        int x = judge(n);
        if(x == 1) printf("%d is a perfect number.\n",n);
        else if(x == 2) printf("%d is an abundant number.\n",n);
        else printf("%d is a deficient number.\n",n);
    }
    return 0;
}
