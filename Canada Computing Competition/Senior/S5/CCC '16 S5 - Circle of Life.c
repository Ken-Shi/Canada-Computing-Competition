#include <stdio.h>
#include <string.h>
#define size 100001
int a[size];
char c[size];
int temp[size];
int main(){
	long long n,t;
	scanf("%lld %lld\n",&n,&t);
	scanf("%s",c);
	for(int i = 0;i < n;i++) a[i] = c[i] - 48;
	for(int i = 49;i >= 0;i--) {
		if((t >> i) & 1){
			int thing = (1LL << i) % n;
			int thing2 = (n - thing) % n;
			for(int j = 0;j < n;j++) temp[j] = a[(j + thing) % n] ^ a[(j + thing2) % n];
			memcpy(a,temp,size);
		}
	}
	for(int i = 0;i < n;i++) printf("%d",a[i]);
	return 0;
}
