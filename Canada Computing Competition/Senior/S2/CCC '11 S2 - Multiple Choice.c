#include <stdio.h>
int main(){
    int k;
    scanf("%d\n",&k);
    int x[k];
    char c;
    for(int i = 0;i < k;i++){
        scanf("%c\n",&c);
        x[i] = c - 65;
    }
    int total = 0;
    for(int i = 0;i < k;i++){
        scanf("%c\n",&c);
        if(x[i] + 65 == c) total++;
    }
    printf("%d",total);
    return 0;
}
