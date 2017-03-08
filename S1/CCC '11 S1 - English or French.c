#include <stdio.h>
int main(){
    char x;
    int e = 0,f = 0;
    while(scanf("%c",&x) != EOF){
        if(x == 's' || x == 'S') f++;
        if(x == 't' || x == 'T') e++;
    }
    if(e > f) printf("English");
    else printf("French");
    return 0;
}
