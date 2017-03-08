#include <stdio.h>
#include <string.h>
int main(){
    char a[1000];
    char x;
    int k;
    scanf("%d",&k);
    int counter = 0;
    while(counter != k){
        scanf("%s",a);
        x = getchar();
        int len = strlen(a);
        if(len == 4) printf("**** ");
        else printf("%s ",a);
        if(x == '\n' || x == EOF) {
        	printf("\n");
        	counter++;
        }
    }
}
