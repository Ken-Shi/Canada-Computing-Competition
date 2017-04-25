#include <bits/stdc++.h>
using namespace std;
vector <string> sa, sb;
int total,a[100];
int flag;
void solve(int m,int n,string x,string y,int cnt){
    if(cnt > m) return;
    if (x == y && x != ""){
        flag = 1;
        total = cnt;
        return;
    }
    for(int i = 0;i < n;i++){
        string cx = x + sa[i], cy = y + sb[i];
        solve(m,n,cx,cy,cnt + 1);
        if(flag){
            a[cnt] = i;
            return;
        }
    }
}
int main(){
	int m,n;
    scanf("%d\n%d\n",&m,&n);
    string temp;
    for(int i = 0;i < n;i++){
		cin >> temp;
        sa.push_back(temp);
    }
    for(int i = 0;i < n;i++){
		cin >> temp;
        sb.push_back(temp);
    }
    solve(m,n,"","",0);
    if(flag){
        printf("%d\n",total);
        for(int i = 0;i < total;i++) printf("%d\n",a[i] + 1);
    }
    else printf("No solution.\n");
    return 0;
}
