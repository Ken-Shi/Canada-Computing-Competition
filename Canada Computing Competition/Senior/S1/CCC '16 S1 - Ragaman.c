#include <stdio.h>
int a[127];
int main(){
    char x;
    do{
        scanf("%c",&x);
        a[x]++;
    }while(x != '\n');
    while(scanf("%c",&x) != EOF){
        a[x]--;
    }
    int r = 0,flag = 0;
    for(int i = 97;i < 123;i++) {
    	if(a[i] < 0) flag = 1;
    	r += a[i];
    }
    r += a[42];
    if(r != 0 || flag == 1) printf("N");
    else printf("A");
    return 0;
}
