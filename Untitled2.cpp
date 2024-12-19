#include <stdio.h>

int main() {
	int a[5]= {1,4,6,8,9};
	int n,b;
	printf("nhap n ");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		if(n==a[i]) {
			b=i;
			break;
		}
	}
	if(n=b){
	printf("vi tri %d ",b) ;
}
else{
	printf("khong co"); 
} 
	return 0;
}
