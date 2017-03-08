#include <stdio.h>
long a[2001],b[4001];
int min(int x,int y){
	if(x > y) return y;
	return x;
}
int main() {
	int n,x;
	long ans1,ans2;
    scanf("%d", &n);
    for(int i = 0;i < n;i++) {
        scanf("%d", &x);
        a[x]++;
    }
    for(int i = 1;i <= 2000;i++) {
        if(a[i]) {
            for(int j = i;j <= 2000;j++) {
                if(i == j) b[i + j] += a[i] >> 1;
                else if(a[j]) {
                    b[i + j] += min(a[i], a[j]);
                }
            }
        }
    }
    for(int i = 1;i <= 4000;i++) {
        if(b[i] > ans1) {
            ans1 = b[i];
            ans2 = 1;
        } else if(b[i] == ans1) {
            ans2++;
        }
    }
    printf("%ld %ld", ans1, ans2);
    return 0;
}
