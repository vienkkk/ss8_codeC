#include<stdio.h>

int main() {
	int n;
	printf("nhap so phan tu ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n; i++) {
		printf("them phan tu %d ",i+1);
		scanf("%d",&a[i]); 
	}
		for(int i=n-1;i>=0;i--) {
		printf("%d ",a[i]);
	}
	
	return 0;
}
