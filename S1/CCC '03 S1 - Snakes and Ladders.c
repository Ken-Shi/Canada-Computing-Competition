#include <stdio.h>
int main(){
    int k,p = 1;
    while(1){
        scanf("%d", &k);
        if(k == 0){
            printf("You Quit!");
            break;
        }
        p += k;
        if(p == 9) p = 34;
        if(p == 40) p = 64;
        if(p == 54) p = 19;
        if(p == 67) p = 86;
        if(p == 90) p = 48;
        if(p == 99) p = 77;
        if(p > 100) p -= k;
        printf("You are now on square %d\n", p);
        if(p == 100){
            printf("You Win!");
            break;
        }
    }
    return 0;
}
