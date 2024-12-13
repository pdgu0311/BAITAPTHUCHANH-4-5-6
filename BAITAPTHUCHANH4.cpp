#include<stdio.h>

int main(){
	
	int x, i;
	printf("nhap vao 1 so nguyen duong: ");
	scanf("%d", &x);
	
	if(x <= 0){
		printf("nhap so nguyen duong ko phai am");
		return 1;
	}
	    printf("cac uoc %d la: \n",x);
	
	for ( i = 1; i <= x; i++){
		if(x % i == 0){
			printf("%d \n", i);
		}
	}

	return 0;
}
