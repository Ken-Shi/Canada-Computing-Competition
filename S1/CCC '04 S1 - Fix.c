#include <stdio.h>
#include <string.h>
int fixfree(char a[],char b[]){
	int lena = strlen(a),lenb = strlen(b);
	if(lena > lenb){
		if(a[0] == b[0]) {
			char c[lenb];
			memset(c,0,sizeof c);
			memcpy(c,a,lenb);
			if(strcmp(b,c) == 0) return 1;
		}
		else if(a[lena - 1] == b[lenb - 1]) {
			char c[lenb];
			memset(c,0,sizeof c);
			memcpy(c,a + lena - lenb,lenb);
			if(strcmp(b,c) == 0) return 1;
		}
	}else{
		if(a[0] == b[0]) {
			char c[lena];
			memset(c,0,sizeof c);
			memcpy(c,b,lena);
			if(strcmp(a,c) == 0) return 1;
		}
		else if(a[lena - 1] == b[lenb - 1]) {
			char c[lena];
			memset(c,0,sizeof c);
			memcpy(c,b + lenb - lena,lena);
			if(strcmp(a,c) == 0) return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d\n",&n);
	char a[26],b[26],c[26];
	for(int i = 0;i < n;i++){
		scanf("%s\n%s\n%s\n",a,b,c);
		if(fixfree(a,b)) printf("No");
		else if(fixfree(a,c)) printf("No");
		else if(fixfree(c,b)) printf("No");
		else printf("Yes");
		printf("\n");
	}
	return 0;
}
