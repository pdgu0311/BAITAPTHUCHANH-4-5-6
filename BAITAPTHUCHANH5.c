#include <stdio.h>
#include <math.h>

int main(){
    int n,i,isprime = 1;
    
    printf("nhap so 1 so nguyen: ");
    scanf("%d", &n);
    
    if (n < 2){
        printf(" %d ko phai la so nguyen to", n);
    } else {
        for (i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                isprime = 0;
                break;
            }
            
        }
        if (isprime == 1){
            printf(" %d la so nguyen to \n", n);
        } else {
            printf(" %d ko phai la so nguyen to \n", n);
        }
    }
 
    return 0;
}
