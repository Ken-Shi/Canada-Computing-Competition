#include <stdio.h>
#include <math.h>
int main(){
    double n,m;
    scanf("%lf%lf",&n,&m);
    if(n == 1) n--;
    if(m == 1) m--;
    int x = pow(n, 1.0 / 6);
    int y = pow(m, 1.0 / 6);
    if(x == y){
        x++;
        if(x * x * x * x * x * x == n) y++;
        x--;
    }
    printf("%d",y - x);
    return 0;
}
