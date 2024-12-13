#include <stdio.h>

int main(){
    int n,i,j,isprime =1;
    
    printf("nhap so 1 so nguyen duong: ");
    scanf("%d", &n);
    
    for ( i = 1; i <= n; i++){
        for (j = 2; j * j <= 1; j++){
            if (i % j == 0){
                isprime = 0;
            }
        }
        if(isprime == 1){
           printf("%d\n", i);
        }
    }

    return 0;
}
