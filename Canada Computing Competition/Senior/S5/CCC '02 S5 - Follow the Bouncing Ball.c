#include <stdio.h>
int main(){
	double w,h,b,r;
	scanf("%lf%lf%lf%lf",&w,&h,&b,&r);
	double k = r / (w - b);
	int flag = 0;
	double x = 0,y = 0;
	for (int i = 1;i <= 100000 && !flag;i++){
		y = k *((i * w) - b);
		x = (i * h) / k + b;
		int c2 = (int) ((int) ((y - h / 2) / h + 1) * h);
		int c1 = (int) ((int) ((x - w / 2) / w + 1) * w);
		if((c2 - y) < 5 && (c2 - y) > -5){
			if(c2 != y){
				printf("%d\n",(i - 1 + (int) (y / h)));
				return 0;
			}
			printf("%d\n",(i - 1 + (int) (y / h) - 1));
			return 0;
		}else if((c1 - x) < 5 && (c1 - x) > -5){
			if(c1 != x){
				printf("%d\n",(i - 1 + (int) (x / w)));
				return 0;
			}
			printf("%d\n",(i - 1 + (int) (x / w) - 1));
			return 0;
		}
	} 
	printf("0");
	return 0;
}
