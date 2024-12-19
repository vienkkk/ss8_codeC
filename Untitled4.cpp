#include <stdio.h>

int main() {
	int n;
	int a[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
	};
	int max=a[0][0];
	int c,d;
	for(int i=0; i<2; i++) {
		for(int j=0; j<4; j++)
			if(max<a[i][j]){
				c=i;
				d=j; 
			}
	}
	printf("vi tri lon nhat  %d %d", c,d);

	return 0;
}
