#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
const int N = 5050;
int cmp(int *r,int a,int b,int l){
    return (r[a] == r[b]) && (r[a+l] == r[b+l]);
}
int wa[N],wb[N],ws[N],wv[N];
int rank[N],height[N];
void DA(int *r,int *sa,int n,int m){
    int i,j,p,*x = wa,*y = wb,*t;
    for(i = 0;i < m;i++) ws[i] = 0;
    for(i = 0;i < n;i++) ws[x[i] = r[i]]++;
    for(i = 1;i < m;i++) ws[i] += ws[i - 1];
    for(i = n - 1;i >= 0;i--) sa[--ws[x[i]]] = i;
    for(j = 1,p = 1;p < n;j *= 2,m = p){
        for(p = 0,i = n - j;i < n;i++) y[p++] = i;
        for(i = 0;i < n;i++) if(sa[i] >= j) y[p++] = sa[i] - j;
        for(i = 0;i < n;i++) wv[i] = x[y[i]];
        for(i = 0;i < m;i++) ws[i] = 0;
        for(i = 0;i < n;i++) ws[wv[i]]++;
        for(i = 1;i < m;i++) ws[i] += ws[i-1];
        for(i = n - 1;i >= 0;i--) sa[--ws[wv[i]]] = y[i];
        for(t = x,x = y,y = t,p=1,x[sa[0]] = 0,i = 1;i < n;i++)
            x[sa[i]] = cmp(y,sa[i-1],sa[i],j)?p-1:p++;
    }
}
void calheight(int *r,int *sa,int n){
    int i,j,k = 0;
    for(i = 1;i <= n;i++) rank[sa[i]] = i;
    for(i = 0;i < n;height[rank[i++]] = k)
        for(k?k--:0,j = sa[rank[i]-1];r[i+k] == r[j+k];k++);
}
int n;
char ss[N];
int aa[N];
int sa[N];
int solve(){
    DA(aa,sa,n+1,128);
    calheight(aa,sa,n);
    int ans = 0;
    for (int i = 1;i <= n;i++){
        ans += n-sa[i] - height[i];
    }
    return ans;
}
int main (){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",&ss);
        n = strlen(ss);
        for (int i = 0;i < n;i++)
            aa[i] = ss[i];
        aa[n] = 0;
        int ans = solve();
        ans++;
        printf("%d\n",ans);
    }
    return 0;
}

