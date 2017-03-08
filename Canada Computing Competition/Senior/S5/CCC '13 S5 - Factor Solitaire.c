#include <stdio.h>
#include <math.h>
int main(){
    int n,r = 0,counter;
    scanf("%d",&n);
    while(n > 1){
    	int m = (int)sqrt(n);
    	counter = 2;
    	while(counter <= m && n % counter != 0) counter++;
        if(n % counter == 0){
            int x = n / counter;
            n -= x;
            r += n / x;
        }else{
        	r += n - 1;
        	n--;
		}
    }
    printf("%d",r);
    return 0;
}
