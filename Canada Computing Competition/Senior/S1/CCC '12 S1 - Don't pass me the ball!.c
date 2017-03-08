#include <stdio.h>
long long f(long long a){
    if(a == 0) return 1;
    a = a * (a - 1) * (a - 2)/6;
    return a;
}
int main(){
    long long a;
    scanf("%lld",&a);
    if(a < 4) a = 0;
    else a = f(a - 1);
    printf("%lld",a);
    return 0;
}
