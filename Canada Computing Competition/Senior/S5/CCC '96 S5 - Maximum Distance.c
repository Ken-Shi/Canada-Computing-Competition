#include <stdio.h>
int binsearch(int array[],int low,int high,int target){
    while(low <= high)
        {
            int mid = (low + high) / 2;
            if(array[mid] > target)
                low = mid + 1;
            else 
                return mid;
        }
    return -1;
}
int main(){
	int m;
	scanf("%d",&m);
	for(int i = 0;i < m;i++){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int j = 0;j < n;j++) scanf("%d",&a[j]);
		for(int j = 0;j < n;j++) scanf("%d",&b[j]);
		int max = 0;
		for(int j = n - 1;j >= max;j--){
			int pos = binsearch(a,0,j,b[j]);
			if(pos == -1)  break;
			else {
				while(pos >= 0 && a[pos] < b[j] && a[pos - 1] <= b[j]) pos--;
				while(pos >= 0 && a[pos - 1] == a[pos]) pos--;
				if(pos == -1)  break;
				if(max < j - pos) max = j - pos;
			}
		}
		printf("The maximum distance is %d\n",max);
	}
	return 0;
}
